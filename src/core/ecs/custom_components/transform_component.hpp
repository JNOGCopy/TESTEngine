#pragma once

#include <common/vector3.h>
#include <core/ecs/ecs_component.hpp>

struct TransformComponent: ECSComponent {
public:
    Vector3 position = Vector3(0, 0, 0);
    Vector3 rotation = Vector3(0, 0, 0);
    Vector3 scale = Vector3(0, 0, 0);
};