
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//��һ�� ���ɶ���д��ȱ���ڴ����Ĵ�
//�ڶ��֣��ɶ�����д��ȱ�����׳����ŵ��ڴ�����С



void mainA()
{
	char str[3][10] = { "calc","tasklist","ipconfig" };//ջ��
	printf("%d\n", sizeof(str));//30

	for (int i = 0; i < 3; i++)
	{
		*str[i] = 'A';//�ַ����׵�ַ
		printf("%s\n", str[i]);
		system(str[i]);
	}
	



	system("pause");
}

void main1()
{
	char *cmd[3]={ "calc","tasklist","ipconfig" };  //������
	printf("%d\n", sizeof(cmd));//����ָ��Ĵ�С

	for (int i = 0; i < 3; i++)
	{
		//*cmd[i] = 'A';//�ɱ��룬����ִ�б���
		printf("%s\n", cmd[i]);
		system(cmd[i]);
	}




	system("pause");
}