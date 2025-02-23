#include<stdio.h>
int main()
{
	int data[5] = { 1,0,0,8,6 };
	int backups[5] = { 0 };
	int i;
	for (i = 0; i < 5; i++)
	{
		backups[i] = data[i];
	}
	
	printf("源数据为：\n");
	for (i = 0; i < 5; i++)
		printf("%d ", data[i]);
	putchar("\n");
	printf("\n备份数据为：\n");
	for (i = 0; i < 5; i++)
		printf("%d ", backups[i]);
	data[4] = 9;
	for (i = 0; i < 5; i++)
	{
		backups[i] = data[i];
	}
	printf("\n源数据为：\n");
	for (i = 0; i < 5; i++)
		printf("%d ", data[i]);
	putchar("\n");
	printf("\n备份数据为：\n");
	for (i = 0; i < 5; i++)
		printf("%d ", backups[i]);
	putchar("\n");
	return 0;
}