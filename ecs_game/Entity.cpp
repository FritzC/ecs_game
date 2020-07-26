#include "Entity.h"

namespace Entities {

	bool Entity::markedForDeletion() const {
		return _markedForDeletion;
	};

	void Entity::deleteEntity() {
		_markedForDeletion = true;
	};

}