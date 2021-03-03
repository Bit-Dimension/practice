#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("************************\n");
	printf("****1.add      2.sub****\n");
	printf("****3.mul      4.div****\n");
	printf("****5.xor      0.ext****\n");
	printf("************************\n");
}
int ADD(int x, int y)
{
	return x + y;
}
int SUB(int x, int y)
{
	return x - y;
}
int MUL(int x, int y)
{
	return x * y;
}
int DIV(int x, int y)
{
	return x / y;
}
int XOR(int x, int y)
{
	return x ^ y;
}
int main()
{
	int input = 0;
	int x = 0; int y = 0;
	int(*pfarr[])(int , int) = { 0, ADD, SUB, MUL, DIV, XOR };
	
	/*getchar();*/
	do
	{
		menu();
		scanf("%d", &input);
		if (input >= 1 && input <= 5)
		{
			printf("输入数据：");
			scanf("%d%d", &x, &y);
			printf("%d\n", pfarr[input](x, y));
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("错误\n");
			break;
		}
	} while (input);
	
	return 0;
}
