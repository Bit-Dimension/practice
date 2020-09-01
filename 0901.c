#include<stdio.h>
int a = 330;
int b = 233;
int max;
int A(int x, int y)
{
	if (x>y)
	{
		return x;
	}
	else
		return y;

}
int main()
{
	int* p = &a;
	printf("%d\n", sizeof p);
	/*max = A(a, b);
	printf("max=%d", max);*/
	return 0;
}
