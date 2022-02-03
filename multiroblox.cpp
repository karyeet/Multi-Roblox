#include <Windows.h>
#include <cstdio>
#include <conio.h>

int main()
{
	CreateMutex(NULL, TRUE, "ROBLOX_singletonMutex");

	printf("You can now open multiple ROBLOX clients.\n");
    	printf("Closing this window will close all but one client.\n\n");
	
	printf("Press any key to close.");
	getch();
	return 0;
}
