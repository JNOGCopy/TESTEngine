#include <memory>
#include <iostream>

#include <core/ecs/ecs_module.hpp>

#include <app/game/game.hpp>

#include <core/ecs/ecs_entity.hpp>
#include <core/ecs/ecs_component.hpp>

#include <core/ecs/ecs_entity_container.hpp>
#include <core/ecs/ecs_component_container.hpp>

#include <core/ecs/custom_components/transform_component.hpp> 
#define LOG(x) std::cout << x << std::endl;

int main(){
    std::unique_ptr<Game> game = std::make_unique<Game>();

   
}