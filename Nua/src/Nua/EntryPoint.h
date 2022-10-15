#pragma once

#ifdef N_PLATFORM_WINDOWS

extern Nua::Application* Nua::CreateApplication();

//We want to be explicit with memory
int main(int argc, char** argv)
{
	printf("Hazel Engine\n");
	auto app = Nua::CreateApplication();
	app->Run();
	delete app;


}

#endif
