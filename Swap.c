#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void Swap(int*x,int*y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int a; int b;
	scanf("%d%d", &a,&b);
	printf("a=%d b=%d\n", a, b);
	Swap(&a,& b);
	printf("a=%d b=%d\n", a, b);
		return 0;
}
