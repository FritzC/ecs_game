#pragma once
#include "Component.h"

namespace Components {

	struct Transform2D {

		sf::Vector2<float> position;
		sf::Vector2<float> rotation;
		LayerMask layer;

	};

}
