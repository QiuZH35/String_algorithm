
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void main2()
{
	int a[10] ={ [1] = 4 ,[8] = 9 };//�ڶ���Ԫ�س�ʼ��4���ھŸ�Ԫ�س�ʼ��9������Ϊ0

	for (int i = 0; i < 10; i++)
	{

		printf("\n%d", a[i]);
	}

	system("pause");
}

void main3()
{
	int* p = (int[]){ [1] = 4 ,[3] = 9,[5] = 22 };//ջ����̬�����ڴ�
	for (int i = 0; i <= 5; i++)
	{
		printf("%d\n", p[i]);
	}

}


struct mystruct
{
	int num;
	double db;
	char a;
	_Bool bl;


}my1 = {.num=22,.bl=1,.db=129.6,.a='A'}; //��ʼ���ṹ��my1,�Ҳ���˳��

void main()
{
	printf("%d ��%f,%d,%c", my1.num, my1.db, my1.bl, my1.a);

	//struct mystruc* p = (mystruct[2]){[0] = {.num = 22,.db = 123.5,.bl = 1,.a = 'A'};

	struct mystruct p[4] = (struct mystruct[]){ [3] = {.num = 22,.db = 123.5,.bl = 1,.a = 'A'} };
	for (int i = 0; i < 4;i++)
	{

		printf("%d ��%f,%d,%c",p[i].num, p[i].db, p[i].bl, p[i].a);

	}
	system("pause");
}


