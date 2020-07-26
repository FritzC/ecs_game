#pragma once
#include "Component.h"

namespace Components {

	namespace Physics {

		struct BoxCollider2D {

			sf::Vector2<float> size;
			sf::Vector2<float> offset;
			bool isTrigger;

		};

	}

}