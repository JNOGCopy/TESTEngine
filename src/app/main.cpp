#include <memory>
#include <iostream>

#include <core/ecs/ecs_module.hpp>
#include <core/ecs/ecs_entity_container.hpp>
#include <core/ecs/ecs_entity.hpp>

#define LOG(x) std::cout << x << std::endl;

int main(){
    std::unique_ptr<ECSModule> ecsModule = std::make_unique<ECSModule>();

    for (int i = 0; i < 254; i++){
        ecsModule->getECSEntityContainer()->addEntity();
    }

    ecsModule->getECSEntityContainer()->DEBUG_printAllEntities();
}