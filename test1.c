#include<stdio.h>
int main()
{
	long long username = 20213084561;
	long long initialpsw = username % 202130000000L;
	long long psw = initialpsw;
	long long newpsw;
	long long confirmedpsw;
	printf("用户：%lld", username);
	printf("请输入新密码：");
	scanf_s("%lld", &newpsw);
	printf("请确认密码：");
	scanf_s("%lld", &confirmedpsw);
	if (newpsw == confirmedpsw)
		printf("修改密码成功。");

	return 0;
}