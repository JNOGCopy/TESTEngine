#include "ecs_component_container.hpp"
#include <iostream>

template <typename T>
void ECSComponentContainer<T>::addComponent(ECS_ENTITY_ID_TYPE id, std::shared_ptr<T> component)
{
    if (m_componentList.find(id) != m_componentList.end()){
        std::cout << "ERROR: Violation to ECS trying to add twice the same component at entity id " << std::to_string(id) << std::endl;
        return;
    }

    m_componentList.emplace(id, component);
}

template<typename T>
std::shared_ptr<T> ECSComponentContainer<T>::getComponent(ECS_ENTITY_ID_TYPE id)
{
    if (m_componentList.find(id) != m_componentList.end()){
        std::cout << "ERROR: Violation to ECS trying to get component that is not registered on id " << std::to_string(id) << std::endl;
        return nullptr;
    }
    
    return m_componentList.at(id);
}
