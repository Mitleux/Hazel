#pragma once
#include"Core.h"
namespace Hazel {
	class HAZEL_API Application
	{
	public:

		Application() = default;
		virtual ~Application();

		void Run();
	};

	// To be define in client
	Application * CreateApplication();
}