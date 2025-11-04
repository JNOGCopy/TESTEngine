#include "ecs_entity_container.hpp"

#include "ecs_module.hpp"

ECSModule::ECSModule()
{
    m_ecsEntityContainer = std::make_shared<ECSEntityContainer>();
}

std::shared_ptr<ECSEntityContainer> ECSModule::getECSEntityContainer()
{
    return m_ecsEntityContainer;
}

template<typename T>
std::shared_ptr<ECSComponentContainer> ECSModule::getECSComponentContainer()
{
    std::size_t hash = typeid(T).hash_code();
    if (m_ecsComponentContainerMap.find(hash) == m_ecsComponentContainerMap.end()){
        return nullptr;
    }

    return (std::shared_ptr<ECSComponentContainer>) m_ecsComponentContainerMap.at(hash);
}

template <typename T>
void ECSModule::addECSComponentContainer(std::shared_ptr<ECSComponentContainer> componentContainter)
{
    std::size_t hash = typeid(T).hash_code();
    if (m_ecsComponentContainerMap.find(hash) != m_ecsComponentContainerMap.end()){
        return;
    }

    m_ecsComponentContainerMap.emplace(componentContainter);
}
