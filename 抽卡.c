#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int rad = 0;
int card = 0;
void menu()
{
	printf("******************\n");
	printf("**1.play  0.exit**\n");
	printf("******************\n");
	printf("请输入：");
}
void game()
{
	int a = 0;
	printf("抽卡！从1-50中选择一张卡片：");
	scanf("%d", &card);
	getchar();
	rad = rand() % 50+1;
	a = card - rad;
	if (a == 0)
	{printf("#******<传说>******#\n");}
	else if (a>=-5&&a<=5)
	{printf("|*****<史诗>*****|\n");}
	else if ((a>=-15&&a<5)||(a>5&&a<15))
	{printf("****<稀有>****\n");}
	else
	{ printf("***普通***\n"); }
}
int option = 0;
int main()
{
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &option);
		getchar();
		switch (option)
		{
		case 0:{printf("退出\n"); break; }
		case 1:{do
		{
			game();
			printf("want to exit,press 0;otherwise,press another key:");
			scanf("%d", &option);
		} while (option != 0);
			break; }
		default:{printf("输入0或1\n"); }
		}
	}
		while (option!=0);
		return 0;
}
