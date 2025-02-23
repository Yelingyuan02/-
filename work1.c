#include<stdio.h>
#include<math.h>
long long powersOf2(int num)
{
	long long result = 2;
	for (int i = 0; i < num - 1; i++)
	{
		result *= 2;
	}
	return result;
}
int main()
{
	int n = 0;
	printf("请输入自然数n用以求取2的n次方：");
	scanf("%d", &n);
	printf("2的%d次方的结果是%d\n", n, powersOf2(n));
	return 0;
}