#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0; int i = 0; int c = 0;
	scanf("%d", &a);
	for (i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) == 1)  //移动i位即表示每次移动一位，依次比较
		{
			c++;
		}
	}
	printf("%d\n", c);
	return 0;
}
