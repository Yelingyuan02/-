#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<Windows.h>
int main()
{
	int hour, min, sec;
	int cnt = 0;
	printf("按任意键结束\n");

	while (!_kbhit())//按下任意键退出循环
	{
		hour = cnt / 3600;
		min = cnt / 600;
		sec = cnt % 60;
		printf("%02d:%02d:%02d\r", hour, min, sec);
		Sleep(1000);
		cnt++;
	}
	printf("\n程序退出\n");
	return 0;
}