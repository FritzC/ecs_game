#pragma once
#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include "System.cpp"


namespace Systems {

	class SystemManager {
		public:
			std::vector<std::unique_ptr<System>> systems;

			void init();
			void schedule();
			void runSystems(sf::Time timestep);
	};

}
