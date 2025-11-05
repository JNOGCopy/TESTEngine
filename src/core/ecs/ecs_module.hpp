#pragma once

#include <memory>
#include <unordered_map>

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
    std::shared_ptr<ECSComponentContainer<T>> getECSComponentContainer();
    
    template<typename T = ECSComponent>
    void addECSComponentContainer(std::shared_ptr<ECSComponentContainer<T>>);
};