#pragma once

#ifdef DD_PLATFORM_WINDOWS
	#ifdef DREAMDROP_BUILD_DLL 
		#define DREAMDROP_API __declspec(dllexport)
	#else
		#define DREAMDROP_API __declspec(dllimport)
	#endif
#else
	#error Only Windows is currently supported by Dream Drop.
#endif