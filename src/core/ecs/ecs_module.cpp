#include "ecs_module.hpp"

std::shared_ptr<ECSEntityContainer> ECSModule::getECSEntityContainer(){
    return m_ecsEntityContainer;
}

template<typename T>
std::shared_ptr<ECSComponentContainer> ECSModule::getECSComponentContainer()
{
    std::size_t hash = typeid(T).hash_code();
    if (m_ecsComponentContainerMap.find(hash) == m_ecsComponentContainerMap.end()){
        return;
    }

    return m_ecsComponentContainerMap.at(hash);
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
