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
	double r = 0;//Բ�İ뾶
	double c = 0;
	double s = 0;
	printf("����뾶��");
	scanf("%lf", &r);
	CS(&r, &c, &s);
	printf("�ܳ���%.2lf\n�����%.2lf\n", c, s);
	return 0;
}