#pragma once
#include "GameLoop.h"
#include "World.h"

namespace Game {

	class Game {
		public:
			void init();
			void start();
		private:
			virtual void setupGameWorld() = 0;
			void tick(sf::Time step);
			void renderTick(sf::Time step);
			World::World world;
	};
}