#include <iostream>
#include <vector>
#include "Component.cpp"

using namespace Components;

namespace Systems {

	class Test {};

	class System {
		//std::set<System> &getSystems

		public:
			int priority = 0;
			virtual void run() = 0;
			void init() {
				
			};

	};

	class TestSystem : public System {
		void run() {}
	};

	class TestSystem2 : System {

	};

}
 