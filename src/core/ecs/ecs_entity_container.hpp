#include <unordered_map>
#include <memory>

#include "ecs_definitions.hpp"

struct ECSEntity;

struct ECSEntityContainer{
private:
    std::unordered_map<ECS_ENTITY_ID_TYPE, std::shared_ptr<ECSEntity>> m_entityList;
public:
    std::shared_ptr<ECSEntity> getEntity(ECS_ENTITY_ID_TYPE);
    std::shared_ptr<ECSEntity> addEntity();
};