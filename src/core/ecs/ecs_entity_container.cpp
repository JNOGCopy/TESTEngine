#include "ecs_entity_container.hpp"

#include "ecs_entity.hpp"
#include <common/log_macros.h>

void ECSEntityContainer::DEBUG_printAllEntities() const
{
    for (auto& [id, entity] : m_entityList){
        LOG("ENTITY " << std::to_string(id))
    }
}

std::shared_ptr<ECSEntity> ECSEntityContainer::getEntity(ECS_ENTITY_ID_TYPE entityId) const
{
    if (m_entityList.find(entityId) == m_entityList.end(entityId)){
        return nullptr;
    }
    return m_entityList.at(entityId);
}

std::shared_ptr<ECSEntity> ECSEntityContainer::addEntity()
{
    std::shared_ptr<ECSEntity> newEntity = std::make_shared<ECSEntity>(m_currentEntityId);
    m_entityList.emplace(m_currentEntityId, newEntity);
    m_currentEntityId += 1;
    return newEntity;
}
