#include <memory>
#include <iostream>

#include <core/ecs/ecs_module.hpp>

#include <core/ecs/ecs_entity.hpp>
#include <core/ecs/ecs_component.hpp>

#include <core/ecs/ecs_entity_container.hpp>
#include <core/ecs/ecs_component_container.hpp>

#include <core/ecs/custom_components/transform_component.hpp>

#define LOG(x) std::cout << x << std::endl;

int main(){
    std::unique_ptr<ECSModule> ecsModule = std::make_unique<ECSModule>();
    
    std::shared_ptr<ECSComponentContainer<TransformComponent>> ecsTransformComponentContainer = std::make_shared<ECSComponentContainer<TransformComponent>>();

    std::shared_ptr<ECSEntity> entity = ecsModule->getECSEntityContainer()->addEntity();
    
    ecsModule->addECSComponentContainer(ecsTransformComponentContainer);
}