#include "Game.h"
#include "ComponentManager.h"
#include "Constants.h"

namespace Game {

	void Game::init() {
		Components::ComponentManager::registerComponentTypes();

		world.init();
		setupGameWorld();
	}

	void Game::start() {

		sf::Clock clock;
		sf::Time hangingTime;
		sf::Time timeStep = sf::seconds(GameConstants::GAME_TICK_DURATION);

		while (true) {
			while (clock.getElapsedTime() + hangingTime < timeStep) {
				tick(timeStep);
			}

			renderTick(timeStep);

			// This accounts for the length of the render time
			hangingTime = clock.getElapsedTime() - timeStep;
			clock.restart();
		}
	}

	void Game::tick(sf::Time timeStep) {
		world.tick(timeStep);
	}

	void Game::renderTick(sf::Time timeStep) {}
}