#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 1;
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n ; i++)
	{
		a = a*i;
		printf("%d ", a);
	}
	printf("n!=%d", a);
	return 0;
}
