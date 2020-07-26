#pragma once
#include <iostream>
#include <vector>
#include <map>
#include "Component.h"

namespace Components {

    typedef std::uint8_t ComponentType;

    class ComponentManager {

        public:
            static ComponentType componentTypeCount;
            static std::map<const char*, ComponentType> componentTypeNames;
            static std::vector<std::vector<Component*>> components;

            void init();

            //template <typename T>
            //T getComponent();
            static void registerComponentTypes();
        private:
            template <typename T>
            static void registerComponentType() {
                const char* typeName = typeid(T).name();

                // Check if the component has already been registered
                bool found = componentTypeNames.count(typeName) == 1;
                assert(!found && "Component type should only be registered once!");

                std::cout << "Registering " + std::string(typeName) + "\n";
                componentTypeNames.insert({ typeName, componentTypeCount++ });
            }

    };

}