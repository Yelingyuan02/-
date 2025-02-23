//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int check(char* passwork)
//{
//	int len = strlen(passwork);
//	if (len < 6 || len>15)
//	{
//		return 0;
//	}
//	int num = 0;
//	int letter1 = 0;
//	int letter2 = 0;
//	int ch = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (passwork[i] > '1' && passwork[i] < '9')
//			num = 1;
//		else if (passwork[i] > 'a' && passwork[i] < 'z')
//			letter1 = 1;
//		else if (passwork[i] > 'a' && passwork[i] < 'z')
//			letter2 = 1;
//		else
//			ch = 1;
//	}
//	return num && letter1 && letter2 && ch;
//}
//int main()
//{
//	char oldpasswork[16];
//	printf("请输入旧密码\n");
//	scanf_s("%s", oldpasswork);
//	
//	if (!check(oldpasswork))
//	{
//		printf("密码不符合要求，请重新输入\n");
//		return 1;
//	}
//	char newpasswork[16];
//	scanf_s("%s", newpasswork);
//	if (!check(newpasswork))
//	{
//		printf("新密码不符合要求，请重新输入\n");
//		return 1;
//	}
//	printf("密码修改成功\n");
//	return 0;
//}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 检查密码是否符合要求
int checkPassword(const char* password) {
    int len = strlen(password);
    if (len < 6 || len > 15) {
        return 0;
    }

    int hasDigit = 0;
    int hasLetter = 0;
    int hasSpecialChar = 0;

    for (int i = 0; i < len; i++) {
        if (isdigit(password[i])) {
            hasDigit = 1;
        }
        else if (isalpha(password[i])) {
            hasLetter = 1;
        }
        else {
            hasSpecialChar = 1;
        }
    }

    return hasDigit && hasLetter && hasSpecialChar;
}

int main() {
    char oldPassword[16];
    char newPassword[16];

    // 输入旧密码
    printf("请输入旧密码：");
    scanf_s("%s", oldPassword,sizeof(oldPassword));

    // 检查旧密码是否符合要求
    if (!checkPassword(oldPassword)) {
        printf("旧密码不符合要求，请重新输入。\n");
        return 1;
    }

    // 输入新密码
    printf("请输入新密码：");
    scanf_s("%s", newPassword,sizeof(newPassword));

    // 检查新密码是否符合要求
    if (!checkPassword(newPassword)) {
        printf("新密码不符合要求，请重新输入。\n");
        return 1;
    }

    // 假设这里进行密码修改的实际操作，比如更新数据库等，这里仅简单模拟
    printf("密码修改成功！\n");

    return 0;
}