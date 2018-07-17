#include "FPS.h"

#define FPS 5 

void main() {
	char c;
	do {
		system("cls");
		printf("CHOISE :\n\n");
		printf("1 : Use clock(), time() of  time.h\n");
		printf("2 : Use sleep() of  windows.h \n\n");
		printf("Press ESC to quit !\n");
		c = _getch();
		switch (c) {

		case '1': {
			useClock(FPS);
			break;
		}
		case '2': {
			useSleep(FPS);
			break;
		}
		}
	} while (c != 27);
}

