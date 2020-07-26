#pragma once
#include "ComponentManager.h"
#include "EntityManager.h"
#include "SystemManager.h"

namespace World {

	using namespace Entities;
	using namespace Components;
	using namespace Systems;

	class World {
		public:
			std::shared_ptr<ComponentManager> componentManager;
			std::shared_ptr<EntityManager> entityManager;
			std::shared_ptr<SystemManager> systemManager;
			
			World();
			void init();
			void tick(sf::Time timeStep);
	};

}