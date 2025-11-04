cmake_minimum_required(VERSION 3.10.0)
project(TESTEngine VERSION 0.1.0 LANGUAGES C CXX)

add_executable(TESTEngine 
    src/app/main.cpp
    # ECS CORE
    src/core/ecs/ecs_component_container.cpp
    src/core/ecs/ecs_entity_container.cpp
    src/core/ecs/ecs_entity.cpp
    src/core/ecs/ecs_module.cpp
)

include_directories(TESTEngine src)