
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>




void main()
{
	char* input = "hijl123456lkhgf321456123hilk12345ol";
	char* output = input;

	int length;

	int max = 0;  

	char* inputp = input;
	while (*inputp != '\0')
	{
		while (*inputp < '0' || *inputp>'9')
		{
			inputp++;
		}
		char* temp = inputp;//保存第一个数字的首地址
		while (*inputp >= '0' && *inputp <= '9')
		{
			inputp++;
		}
		if (inputp-temp > max)
		{
			max = inputp - temp;
			output = temp;
		}


	}


	length = max;
	printf("%d\n", length);
	for (int i = 0; i < length; i++)
	{
		putchar(output[i]);
	}





	system("pause");
}