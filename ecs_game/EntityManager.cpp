#include <iostream>
#include <vector>
#include "Entity.cpp"

namespace Entities {

	class EntityManager {

		public:
			std::vector<std::shared_ptr<Entity>> entities;

			void init() {
				
			}

			void registerEntity(Entity* entity) {
				entity->index = entities.size();
				entities.push_back(std::shared_ptr<Entity>(entity));
			}

			void removeKilledEntities() {
				entities.erase(
					std::remove_if(
						entities.begin(),
						entities.end(),
						[](std::shared_ptr<Entity> e) -> bool {
							return e->markedForDeletion();
						}
					)
				);
			}

	};

}
