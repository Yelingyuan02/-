#include<stdio.h>
int main()
{
	int num = 0;
	srand((unsigned)time(NULL));
	num = rand() % 10;
		switch (num)
		{
		case 0:
		case 1:
			printf("一饭堂");
			break;
		case 2:
		case 3:
			printf("二饭堂");
			break;
		case 4:
		case 5:
			printf("三饭堂");
			break;
		case 6:
		case 7:
			printf("四饭堂");
			break;
		case 8:
			printf("外出就餐");
			break;
		default:
			printf("叫外卖");
			break;
		}
	return 0;
}