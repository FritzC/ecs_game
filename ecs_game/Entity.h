#pragma once

namespace Entities {

	class Entity {

		public:
			int index;
			bool markedForDeletion() const;
			void deleteEntity();

		private:
			bool _markedForDeletion;

	};

}
