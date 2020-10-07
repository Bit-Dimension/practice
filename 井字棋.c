#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*******  井字棋PRO  *******\n");
	printf("***************************\n");
	printf("***  1.play     0.exit  ***\n");
	printf("***************************\n");
}
void OP()
{
	printf("*******<  AI选择  >*******\n");
	printf("**************************\n");
	printf("***  1.普通    0.智械  ***\n");
	printf("**************************\n");
}
int main()
{
	int input; int option;
		do
		{
			menu();
			scanf("%d", &input);
			getchar();
			switch (input)
			{
			case 1:
				OP();
				scanf("%d", &option);
				getchar();
				game(option);
				printf("press 0 to exit/press aother key to restart\n");
				scanf("%d", &input);
				getchar();
				break;
			case 0:
				break;
			default:
				printf("输入0或1\n\n");
				break;
			}
		} while (input!=0);
	return 0;
}
