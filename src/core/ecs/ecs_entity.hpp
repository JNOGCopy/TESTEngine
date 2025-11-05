#pragma once

#include "ecs_definitions.hpp"

struct ECSEntity{
public:
    ECSEntity(ECS_ENTITY_ID_TYPE);
    ECS_ENTITY_ID_TYPE getEntityId();
private:
    ECS_ENTITY_ID_TYPE m_entityId = 0;
};