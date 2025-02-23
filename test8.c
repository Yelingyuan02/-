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
//	printf("�����������\n");
//	scanf_s("%s", oldpasswork);
//	
//	if (!check(oldpasswork))
//	{
//		printf("���벻����Ҫ������������\n");
//		return 1;
//	}
//	char newpasswork[16];
//	scanf_s("%s", newpasswork);
//	if (!check(newpasswork))
//	{
//		printf("�����벻����Ҫ������������\n");
//		return 1;
//	}
//	printf("�����޸ĳɹ�\n");
//	return 0;
//}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// ��������Ƿ����Ҫ��
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

    // ���������
    printf("����������룺");
    scanf_s("%s", oldPassword,sizeof(oldPassword));

    // ���������Ƿ����Ҫ��
    if (!checkPassword(oldPassword)) {
        printf("�����벻����Ҫ�����������롣\n");
        return 1;
    }

    // ����������
    printf("�����������룺");
    scanf_s("%s", newPassword,sizeof(newPassword));

    // ����������Ƿ����Ҫ��
    if (!checkPassword(newPassword)) {
        printf("�����벻����Ҫ�����������롣\n");
        return 1;
    }

    // ����������������޸ĵ�ʵ�ʲ���������������ݿ�ȣ��������ģ��
    printf("�����޸ĳɹ���\n");

    return 0;
}