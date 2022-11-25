
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int isint(int* a, int length)
{

	int flag = 1;
	for (int i = 0; i < length - 1; i++)
	{

		if (a[i] > a[i + 1])
		{
			flag = 0;
			break;
		}
	}
	return flag;


}


//a[9]>a[8] &&a[8]>a[7]...
int func(int* a, int n)
{
	if (n==1)
	{
		return a[1]>a[0];
	}
	else
	{
		return a[n-1] > a[n - 2] && func(a, n-1);
		
	}
}


//a[9]>a[8] a[9]>a[7]
int maxnum(int* a,int n)
{
	int temp = a[0];
	for (int i = 1; i < n ; i++)
	{
		if (a[i] > temp)
		{
			temp = i;
		}
		
	}
	
	return a[temp];

}

int maxdg(int* a, int n,int temp)
{
	 
	if (n == 0)
	{
		if (a[0] >temp)
		{
			temp = a[0];
		}
		return temp;

	}
	else
	{
		if (a[n - 1] > temp)
		{
			temp = a[n - 1];
		}




		return maxdg(a, n - 1,temp);
	}

	





}

void main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,15 };

	printf("%d", isint(a, 10));
	printf(" %d", func(a, 10));

	printf(" %d", maxdg(a, 10,a[9]));




	system("pause");
}