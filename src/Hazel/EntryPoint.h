#pragma once

#ifdef HZ_PLATFORM_WINDOW

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc,char ** argv) {
	printf("Lets go Hazel");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif