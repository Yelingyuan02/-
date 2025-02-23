#include<stdio.h>
int main()
{
	for(int i=1;i<=100;i++)
	{
		if (i % 10 == 7 || i % 7 == 0)
			printf("ßÉ ");
		else
			printf("%d ", i);
	}
	return 0;
}