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
			printf("һ����");
			break;
		case 2:
		case 3:
			printf("������");
			break;
		case 4:
		case 5:
			printf("������");
			break;
		case 6:
		case 7:
			printf("�ķ���");
			break;
		case 8:
			printf("����Ͳ�");
			break;
		default:
			printf("������");
			break;
		}
	return 0;
}