#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*******  ������PRO  *******\n");
	printf("***************************\n");
	printf("***  1.play     0.exit  ***\n");
	printf("***************************\n");
}
void OP()
{
	printf("*******<  AIѡ��  >*******\n");
	printf("**************************\n");
	printf("***  1.��ͨ    0.��е  ***\n");
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
				printf("����0��1\n\n");
				break;
			}
		} while (input!=0);
	return 0;
}