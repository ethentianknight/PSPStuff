//Mark's deadzone checker
//3.15.15
//Checks and sets a dead-zone for the analog stick.

#include <pspkernel.h>
#include <pspdebug.h>
#include <pspdisplay.h>
#include <pspctrl.h>
#include "../../common/callback.h"
#include <windows.h>

//defs
#define VERS 0
#define REVS 1

PSP_MODULE_INFO("Deadzone checker", PSP_MODULE_USER, VERS, REVS);
PSP_MAIN_THREAD_ATTR(PSP_THREAD_ATTR_USER);
PSP_HEAP_SIZE_MAX();

#define printf pspDebugScreenPrintf


//Main function
int main()
{
	int deadzoneLeft = 0;
	int deadzoneRight = 255;
	int deadzoneUp = 0;
	int deadzoneDown = 255;
	//Initializes debug screen (terminal)
	pspDebugScreenInit();
	//Sets up exit (?)
	setupExitCallback();
		//initialize running variable
		//int running = isRunning();
	//Create a buttonInput object
	SceCtrlData buttonInput;
	//sets sampling cycle (in ms?)
	sceCtrlSetSamplingCycle(0);
	//sets it to sample the analog stick
	sceCtrlSetSamplingMode(PSP_CTRL_MODE_ANALOG);

	//Displays info to user
	while (isRunning())
	{
		pspDebugScreenSetXY(0, 0);
		printf("This program will determine your PSP's Dead-Zone.");
		sceDisplayWaitVblankStart();
		//asks user to move analog left
		printf("\nPlease move the analog stick all the way left, then quickly let go.");
		//waits a second, sets deadzone(left) to result -5
		if (buttonInput.Lx <= 10)
		{
			printf("\nPass check");
			Sleep(1000);
			deadzoneLeft = buttonInput.Lx;
			printf("\nLeft: %d", deadzoneLeft);
		}
		//asks user to move analog right

		//waits a second, sets deadzone(right) to result +5

		//asks user to move analog up

		//waits a second, sets deadzone(up) to result -5

		//asks user to move analog down

		//waits a second, sets deadzon(down) to result +5

	}
	sceKernelExitGame();
	return 0;

}


