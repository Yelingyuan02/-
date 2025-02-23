#include<stdio.h>
#include<math.h>
int main()
{
	double weight, height, BMI;
	char c[2] = { 'M','F' };
	printf("您的性别是(M/F):");
	scanf_s("%c", c);
	printf("请输入你的身高：");
	scanf_s("%lf", &height);
	printf("请输入你的体重：");
	scanf_s("%lf", &weight);
	BMI = weight / pow(height, 2);
	if (BMI < 20)
		printf("过轻");
	else if (BMI >= 20 && BMI < 25)
		printf("适中");
	else if (BMI >= 25 && BMI < 30)
		printf("过重");
	else if (BMI >= 30 && BMI < 35)
		printf("肥胖");
	else
		printf("非常肥胖");
	return 0;
}