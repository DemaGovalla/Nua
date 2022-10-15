#pragma once

//Defne a macro
#ifdef N_PLATFORM_WINDOWS
	#ifdef N_BUILD_DLL
		#define NUA_API __declspec(dllexport)
	#else
		#define NUA_API __declspec(dllimport)
	#endif	
#else
	#error Nua only supports Windows!
#endif


