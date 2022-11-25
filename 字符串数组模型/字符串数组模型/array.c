
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//第一种 ，可读可写，缺点内存消耗大
//第二种，可读不可写，缺点容易出错，优点内存消耗小



void mainA()
{
	char str[3][10] = { "calc","tasklist","ipconfig" };//栈区
	printf("%d\n", sizeof(str));//30

	for (int i = 0; i < 3; i++)
	{
		*str[i] = 'A';//字符串首地址
		printf("%s\n", str[i]);
		system(str[i]);
	}
	



	system("pause");
}

void main1()
{
	char *cmd[3]={ "calc","tasklist","ipconfig" };  //代码区
	printf("%d\n", sizeof(cmd));//三个指针的大小

	for (int i = 0; i < 3; i++)
	{
		//*cmd[i] = 'A';//可编译，但是执行报错
		printf("%s\n", cmd[i]);
		system(cmd[i]);
	}




	system("pause");
}