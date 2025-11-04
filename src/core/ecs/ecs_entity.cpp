#include "ecs_entity.hpp"

ECS_ENTITY_ID_TYPE ECSEntity::getEntityId(){
    return m_entityId;
}

ECSEntity::ECSEntity(ECS_ENTITY_ID_TYPE id){
    m_entityId = id;
}
