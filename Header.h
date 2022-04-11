#pragma once
#include <WinUser.h>

void shutdown_pc()
{
	WinExec("shutdown -s -t 0", SW_HIDE);
}