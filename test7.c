#include<stdio.h>
void modify(int arr2[4][4])
{
	int result[4][4];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			result[i][j] = 0;
			for (int n = 0; n < 4; n++)
			{
				result[i][j] += arr2[i][n] * arr2[n][j];
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr2[i][j] = result[i][j];
		}
	}
}
void Print(int arr1[4][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[4][4] = { {1,1,0,1},{0,1,0,1},{0,0,1,1},{ 1,0,0,0 } };
	printf("原矩阵为：\n");
	Print(arr);
	modify(arr);
	printf("平方后：\n");
	Print(arr);
	return 0;
}