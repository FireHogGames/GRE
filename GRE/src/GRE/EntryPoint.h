#pragma once

#ifdef GRE_PLATFORM_WINDOWS

extern GRE::Application* GRE::CreateApplication();

int main(int argc, char** argv) {
	auto app = GRE::CreateApplication();
	app->Run();
	delete app;
}

#endif