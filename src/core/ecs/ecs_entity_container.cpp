#include "ecs_entity_container.hpp"

std::shared_ptr<ECSEntity> ECSEntityContainer::getEntity(ECS_ENTITY_ID_TYPE entityId)
{
    if (m_entityList.find(entityId) == m_entityList.end(entityId)){
        return nullptr;
    }
    return m_entityList.at(entityId);
}

std::shared_ptr<ECSEntity> ECSEntityContainer::addEntity()
{
    std::shared_ptr<ECSEntity> newEntity = std::make_shared<ECSEntity>();
    return newEntity;
}
