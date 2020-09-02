#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int a = 0;
int i = 0;
int z = 0;
int A(int x)
{
	z = x % 2;
	return z;
}

int main()
{
	do
	if (i < 100)
	{
		i++;
		a = A(i);
		if (1==a)
		{
			printf("%d\n", i);
		}

	}
	while (i < 100);
	
		return 0;
}
