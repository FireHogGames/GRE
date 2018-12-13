#pragma once

#include "Core.h"

namespace GRE {

	class GRE_API Application
	{
	public:
		Application();
		~Application();

		void Run();
	};

	Application* CreateApplication();
}
