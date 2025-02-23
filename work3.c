#include<stdio.h>
#include<math.h>
#define PI 3.1415926535
void CS(double* r, double* c, double* s)
{
	*c = 2 * PI * (*r);
	*s = PI * pow(*r, *r);
}
int main()
{
	double r = 0;//圆的半径
	double c = 0;
	double s = 0;
	printf("输入半径：");
	scanf("%lf", &r);
	CS(&r, &c, &s);
	printf("周长：%.2lf\n面积：%.2lf\n", c, s);
	return 0;
}