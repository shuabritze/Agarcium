#pragma once
#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers

#include <Windows.h>
#include <MinHook.h>

namespace winsock {
	BOOL Hook();
}
