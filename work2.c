#include<stdio.h>
long long powersOf2(int n)
{
	if (n == 0)
		return 1;
	else
		return 2 * powersOf2(n - 1);
}
int main()
{
	int n = 0;
	printf("请输入自然数n用以求取2的n次方：");
	scanf("%d", &n);
	
	long long result = powersOf2(n);
	printf("2的%d次方的结果是%lld\n", n, result);
	return 0;
}