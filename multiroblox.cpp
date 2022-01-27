#include <Windows.h>
#include <cstdio>

int main()
{
	CreateMutex(NULL, TRUE, "ROBLOX_singletonMutex");

	printf("You can now open multiple ROBLOX clients.\n");
    	printf("Closing this window will close all but one client.\n\n");
	
	system("pause");
	return 0;
}
