#include<stdio.h>
int main()
{
	long long username = 20213084561;
	long long initialpsw = username % 202130000000L;
	long long psw = initialpsw;
	long long newpsw;
	long long confirmedpsw;
	printf("�û���%lld", username);
	printf("�����������룺");
	scanf_s("%lld", &newpsw);
	printf("��ȷ�����룺");
	scanf_s("%lld", &confirmedpsw);
	if (newpsw == confirmedpsw)
		printf("�޸�����ɹ���");

	return 0;
}