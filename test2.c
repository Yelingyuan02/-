#include<stdio.h>
#include<math.h>
int main()
{
	double weight, height, BMI;
	char c[2] = { 'M','F' };
	printf("�����Ա���(M/F):");
	scanf_s("%c", c);
	printf("�����������ߣ�");
	scanf_s("%lf", &height);
	printf("������������أ�");
	scanf_s("%lf", &weight);
	BMI = weight / pow(height, 2);
	if (BMI < 20)
		printf("����");
	else if (BMI >= 20 && BMI < 25)
		printf("����");
	else if (BMI >= 25 && BMI < 30)
		printf("����");
	else if (BMI >= 30 && BMI < 35)
		printf("����");
	else
		printf("�ǳ�����");
	return 0;
}