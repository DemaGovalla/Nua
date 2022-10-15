#pragma once
#include "core.h"

namespace Nua{

	
	class NUA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be define in Client
	Application* CreateApplication();
}


