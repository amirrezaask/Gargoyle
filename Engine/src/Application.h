#pragma once
#include "Core.h";

namespace Engine 
{
	class EXPOSE Application
	{
	public: 
		Application();
		virtual ~Application();
		void SimplePrint();
	};


	Application* CreateApplication();
}

