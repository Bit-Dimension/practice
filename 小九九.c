#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0; int b = 1; 
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%-2d ", a, b, a*b);//%2d 使输出的int型的数值以2位的固定位宽输出，如果不足2位，则在前面补空格；如果超过2位，则按实际位数输出。
							 //%-2d 后面补空格
		}
		printf("\n");
	}
	return 0;
}
