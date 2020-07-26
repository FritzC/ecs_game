#include "Game.h"

namespace Game {

	class TestGame : public Game {

		private:
			void setupGameWorld() override {
				// Set up entities here
			}

	};
}

void main() {
	Game::TestGame game;
	game.init();
	game.start();
}
