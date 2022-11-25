
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>






void main()
{

	char *cmd[10] = { "calc","tasklist","inconfig","mspaint","ak47","noptepad","ms16","ap16","123456","abno"};
		
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (strcmp(cmd[i],cmd[j])>0)
			{
				char* temp = cmd[i];
				cmd[i] = cmd[j];
				cmd[j] = temp;


			}


		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%s\n", cmd[i]);


	}
	system("pause");
}