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
	printf("��������Ȼ��n������ȡ2��n�η���");
	scanf("%d", &n);
	
	long long result = powersOf2(n);
	printf("2��%d�η��Ľ����%lld\n", n, result);
	return 0;
}