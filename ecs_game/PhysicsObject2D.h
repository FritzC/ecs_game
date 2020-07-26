#pragma once
#include "Component.h"

namespace Components {
	
	namespace Physics {

		struct PhysicsObject2D {

			sf::Vector2<float> velocity;

			bool frozen;
			bool affectedByGravity;

			LayerMask interactsWith;

		};

	}

}