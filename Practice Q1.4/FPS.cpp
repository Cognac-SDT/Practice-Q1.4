#include "FPS.h"

int turn = 0;
int t_Refresh;

int timeRefresh(int FPS) {
	t_Refresh = 1000 / FPS;
	return t_Refresh;
}

void useSleep(int FPS)
{
	timeRefresh(FPS);
	while (GetAsyncKeyState(VK_BACK) >= 0) {
		if (turn == FPS) {
			turn = 0;
			system("cls");
		}
		printf("(SLEEP) Frame  %d  - Press Backspace to quit !\n", turn += 1);
		Sleep(t_Refresh);

	}
}

void waitClock(int FPS) {
	timeRefresh(FPS);
	clock_t endClock;
	endClock = clock() + t_Refresh * CLOCKS_PER_SEC / 1000;
	while (clock() < endClock) {}
}
void useClock(int FPS) {
	while (GetAsyncKeyState(VK_BACK) >= 0) {
		if (turn == FPS) {
			turn = 0;
			system("cls");
		}
		printf("(CLOCK) Frame  %d - Press Backspace to quit !\n", turn += 1);
		waitClock(FPS);

	}
}