
#include "SystemManager.h"


namespace Systems {

	void SystemManager::init() {
		TestSystem* system = new TestSystem();
		systems.push_back(std::unique_ptr<System>(system));
		schedule();
	}

	void SystemManager::schedule() {

	}

	void SystemManager::runSystems(sf::Time timestep) {
		for (int i = 0; i < systems.size(); i++) {
			systems[i]->run();
		}
	}

}
