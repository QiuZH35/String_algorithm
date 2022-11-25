
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
	
	
	int t=0;//循环的临时变量
	char* tmp = malloc(sizeof(char) * 2048);//分配内存保存中间结果
	memset(tmp, 0, 2048);//内存设置为空

	for (int i = size2 - 1, n = 0; i >= 0; i--, n++)
	{
		if (dig2[i] - '0' == 0) //处理为零的数
		{
			continue;  
		}
		memset(tmp, 0, 2048); //清空保存中间值
		int  m = 0;//位数移动
		int r, r2;
		for (int j = size1 - 1; j >= 0; j--, m++)
		{
			//n+m 代表位数
			r = (dig1[j] - '0') * (dig2[i] - '0');  //每一位相乘的结果
			r2 = tmp[m + n] + r;//累加
			tmp[m + n] = r2 % 10;  //余数
			tmp[m + n + 1] = r2 / 10; //进位
		}

		//累加计算结果
		for (t = 0, r2 = 0; t <= m + n + 1 || r2; t++)
		{
			r = res[t] + tmp[t] + r2;//累加
			res[t] = r % 10;//取个位
			r2 = r / 10;//进位
		}


	}
	for (int i = t - 1; i >= 0; i--)
	{
		if (res[i])
		{
			for (int j = 0; j <= i / 2; j++)//数字对调
			{
				char temp = res[j] + 48;
				res[j] = res[i - j] + 48;
				res[i - j] = temp;
			}
			return; //交换完成直接退出
		}
	}
	res[0] = '0';
	return;

}

void main()
{

	char str1[2048] = { 0 };
	char str2[2048] = { 0 };
	
	char res[2048]={0};//保存结果
	scanf("%s", str1);
	scanf("%s", str2);

	
	 mul(str1,str2,res);
	printf("%s * %s = %s", str1, str2,res);
	
	







	system("pause");
}