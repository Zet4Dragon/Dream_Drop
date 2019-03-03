#pragma once

#ifdef DD_PLATFORM_WINDOWS

extern Dream_Drop::App* Dream_Drop::AppCreate();

int main(int argc, char** argv) {
	auto app = Dream_Drop::AppCreate();
	app->run();
	delete app;
}

#endif
