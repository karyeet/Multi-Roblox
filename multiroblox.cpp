#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	CreateMutex(NULL, TRUE, "ROBLOX_singletonMutex");

	cout << "You can now open multiple ROBLOX clients." << endl;
    	cout << "Closing this window will close all but one client." << endl << endl;
	
	system("pause");
	return 0;
}
