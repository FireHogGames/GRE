#pragma once

#ifdef GRE_PLATFORM_WINDOWS
	#ifdef GRE_BUILD_DLL
		#define GRE_API __declspec(dllexport)
	#else
		#define GRE_API __declspec(dllimport)
	#endif
#else
#error GRE only works on windows
#endif