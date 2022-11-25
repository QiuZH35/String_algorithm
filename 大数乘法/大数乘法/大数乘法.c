
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <memory.h>

void mul(char* dig1, char* dig2, char* res)
{
	int size1 = strlen(dig1);
	int size2 = strlen(dig2);
	
	
	int t=0;//ѭ������ʱ����
	char* tmp = malloc(sizeof(char) * 2048);//�����ڴ汣���м���
	memset(tmp, 0, 2048);//�ڴ�����Ϊ��

	for (int i = size2 - 1, n = 0; i >= 0; i--, n++)
	{
		if (dig2[i] - '0' == 0) //����Ϊ�����
		{
			continue;  
		}
		memset(tmp, 0, 2048); //��ձ����м�ֵ
		int  m = 0;//λ���ƶ�
		int r, r2;
		for (int j = size1 - 1; j >= 0; j--, m++)
		{
			//n+m ����λ��
			r = (dig1[j] - '0') * (dig2[i] - '0');  //ÿһλ��˵Ľ��
			r2 = tmp[m + n] + r;//�ۼ�
			tmp[m + n] = r2 % 10;  //����
			tmp[m + n + 1] = r2 / 10; //��λ
		}

		//�ۼӼ�����
		for (t = 0, r2 = 0; t <= m + n + 1 || r2; t++)
		{
			r = res[t] + tmp[t] + r2;//�ۼ�
			res[t] = r % 10;//ȡ��λ
			r2 = r / 10;//��λ
		}


	}
	for (int i = t - 1; i >= 0; i--)
	{
		if (res[i])
		{
			for (int j = 0; j <= i / 2; j++)//���ֶԵ�
			{
				char temp = res[j] + 48;
				res[j] = res[i - j] + 48;
				res[i - j] = temp;
			}
			return; //�������ֱ���˳�
		}
	}
	res[0] = '0';
	return;

}

void main()
{

	char str1[2048] = { 0 };
	char str2[2048] = { 0 };
	
	char res[2048]={0};//������
	scanf("%s", str1);
	scanf("%s", str2);

	
	 mul(str1,str2,res);
	printf("%s * %s = %s", str1, str2,res);
	
	







	system("pause");
}