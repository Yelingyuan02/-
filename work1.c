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
	printf("��������Ȼ��n������ȡ2��n�η���");
	scanf("%d", &n);
	printf("2��%d�η��Ľ����%d\n", n, powersOf2(n));
	return 0;
}