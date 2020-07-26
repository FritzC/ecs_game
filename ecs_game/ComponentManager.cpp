#include <iostream>
#include <vector>
#include <map>
#include <assert.h>
#include "ComponentManager.h"
#include "Transform.h"

namespace Components {

    ComponentType ComponentManager::componentTypeCount = 0;
    std::map<const char*, ComponentType> ComponentManager::componentTypeNames;

    void ComponentManager::registerComponentTypes() {
        registerComponentType<Transform2D>();
        //registerComponentType<TestComponent2>();
    }

    void ComponentManager::init() {
        for (int i = 0; i < componentTypeCount; i++) {

        }
    }

};
