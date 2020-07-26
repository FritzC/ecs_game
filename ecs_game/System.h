#pragma once
#include "SFML/Graphics.hpp"

namespace Systems {

	class System {
		//std::set<System> &getSystems

		public:
			int priority = 0;
			virtual void run(sf::Time timeStep) = 0;
			virtual ~System() = 0;

	};
}