#pragma once

#include <memory>
#include <unordered_map>

#include "ecs_module.hpp"
#include "ecs_entity_container.hpp"

struct ECSComponent;
struct ECSEntityContainer;

template<typename T>
struct ECSComponentContainer;

class ECSModule{
private:
    std::shared_ptr<ECSEntityContainer> m_ecsEntityContainer;
    std::unordered_map<std::size_t, std::shared_ptr<void>> m_ecsComponentContainerMap;
public:
    ECSModule();

    std::shared_ptr<ECSEntityContainer> getECSEntityContainer();

    template<typename T = ECSComponent>
    std::shared_ptr<ECSComponentContainer<T>> getECSComponentContainer(){
        std::size_t hash = typeid(T).hash_code();
        if (m_ecsComponentContainerMap.find(hash) == m_ecsComponentContainerMap.end()){
            return nullptr;
        }

        return (std::shared_ptr<ECSComponentContainer<T>>) m_ecsComponentContainerMap.at(hash);
    }
    
    template<typename T = ECSComponent>
    void addECSComponentContainer(std::shared_ptr<ECSComponentContainer<T>> componentContainter){
        std::size_t hash = typeid(T).hash_code();
        if (m_ecsComponentContainerMap.find(hash) != m_ecsComponentContainerMap.end()){
            return;
        }

        m_ecsComponentContainerMap.emplace(hash, componentContainter);
    }
};