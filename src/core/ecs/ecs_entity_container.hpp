#pragma once

#include <unordered_map>
#include <memory>

#include "ecs_definitions.hpp"

struct ECSEntity;

struct ECSEntityContainer{
private:
    std::unordered_map<ECS_ENTITY_ID_TYPE, std::shared_ptr<ECSEntity>> m_entityList;

    ECS_ENTITY_ID_TYPE m_currentEntityId = 0;
public:
    void DEBUG_printAllEntities() const;

    std::shared_ptr<ECSEntity> getEntity(ECS_ENTITY_ID_TYPE) const;
    std::shared_ptr<ECSEntity> addEntity();
};