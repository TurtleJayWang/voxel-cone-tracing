#include <Windows.h>

extern "C" {
	_declspec(dllexport) DWORD NvOptimusEnablement = 1;
	_declspec(dllexport) int AmdPowerXpressRequestHighPerformance = 1;
}

#include "Source\Application.h"
int main()
{
	Application::getInstance().init();
	Application::getInstance().run();
	return 0;
}

