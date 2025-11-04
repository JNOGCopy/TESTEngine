#pragma once

#include <memory>
#include <unordered_map>

#include "ecs_definitions.hpp"

struct ECSComponent;

template<typename T = ECSComponent>
struct ECSComponentContainer{
private:
    std::unordered_map<ECS_ENTITY_ID_TYPE, std::shared_ptr<T>> m_componentList;
public: 
    std::shared_ptr<T> getComponent(ECS_ENTITY_ID_TYPE id);
    void addComponent(ECS_ENTITY_ID_TYPE id, std::shared_ptr<T> component);
};

