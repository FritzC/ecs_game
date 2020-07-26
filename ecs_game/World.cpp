#include "World.h"

namespace World {

	World::World() {
		entityManager = std::shared_ptr<EntityManager>(new EntityManager());
		componentManager = std::shared_ptr<ComponentManager>(new ComponentManager());
		systemManager = std::shared_ptr<SystemManager>(new SystemManager());
	}

	void World::init() {
		componentManager->init();
	}

	void World::tick(sf::Time timeStep) {
		systemManager->runSystems(timeStep);
	}
}