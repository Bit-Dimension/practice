#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
char board[ROW][COL] = { 0 };
int a; int b;
int *ap = &a; int *bp = &b;

void initibd(char board[ROW][COL])  //数组的初始化
{
	int i; int j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void display()  //棋盘打印
{
	int i; int j; int z;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (j < COL - 1)
				printf(" %c |", board[i][j]);
			else
				printf(" %c \n", board[i][j]);
		}
		if (i < ROW - 1)
		{
			for (z = 0; z < COL; z++)
			{
				if (z < COL - 1)
					printf("---|", board[i][j]);
				else
					printf("---\n", board[i][j]);
			}
		}
	}
}
void playermove(char board[ROW][COL])
{
	int x; int y;
	printf("我的回合！\n（输入坐标<行 列>）\n");
again:
	scanf("%d%d", &x, &y);
	getchar();
	if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
	{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '@';
				system("cls");
				display();
				Sleep(500);
			}
			else
			{
				printf("为什么要往有棋的地方下呢？奇怪的人\n\n这次正常点输入吧：");
				goto again;
			}
	}
}
void AI(char z, char board[ROW][COL], int* x, int* y)  //让电脑不那么蠢     //！！！让函数改变数值用指针！！！
{
	int i; 
	if (board[0][0] == z&&board[1][1] == z&&board[2][2]==' ')
	{
		*x = 2; *y = 2;
		goto end;
	}
	else if (board[0][0] == z&&board[2][2] == z&&board[1][1] == ' ')
	{
		*x = 1; *y = 1;
		goto end;
	}
	else if (board[2][2] == z&&board[1][1] == z&&board[0][0] == ' ')
	{
		*x = 0; *y = 0;
		goto end;
	}
	else if (board[0][2] == z&&board[1][1] == z&&board[2][0] == ' ')
	{
		*x = 2; *y = 0;
		goto end;
	}
	else if (board[2][0] == z&&board[1][1] == z&&board[0][2] == ' ')
	{
		*x = 0; *y = 2;
		goto end;
	}
	else if (board[0][2] == z&&board[2][0] == z&&board[1][1] == ' ')
	{
		*x = 1; *y = 1;
		goto end;
	}
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == z&&board[i][1] == z&&board[i][2] == ' ')
		{
			*x = i; *y = 2;
			break;
		}
		else if (board[i][0] == z&&board[i][2] == z&&board[i][1] == ' ')
		{
			*x = i; *y = 1;
			break;
		}
		else if (board[i][1] == z&&board[i][2] == z&&board[i][0] == ' ')
		{
			*x = i; *y = 0;
			break;
		}
		else if (board[0][i] == z&&board[1][i] == z&&board[2][i] == ' ')
		{
			*x = 2; *y = i;
			break;
		}
		else if (board[0][i] == z&&board[2][i] == z&&board[1][i] == ' ')
		{
			*x = 1; *y = i;
		break;
		}
		else if (board[2][i] == z&&board[1][i] == z&&board[0][i] == ' ')
		{
			*x = 0; *y = i;
			break;
		}
}
end:;
}
void aimove(int o)
{
	int x=0; int y=0;
	a:
	x = rand() % ROW; y = rand() % COL;
	if (o == 0)
	{
		AI(64, board, &x, &y);  //@
		AI(35, board, &x, &y);  //#
	}
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			system("cls");
			display();
		}
		else
			goto a;
}

void win(int n)
{
	switch (n)
	{
	case 1:
		printf("####################\n");
		printf("##<!***你赢了***!>##\n");
		printf("####################\n");
		break;
	case 2:
		printf("#####################\n");
		printf("#######**LOSE**######\n");
		printf("#####################\n");
		break;
	case 3:
		break;
	case 4:
		printf("####################\n");
		printf("#<*旗鼓相当的对手*>#\n");
		printf("####################\n");
		break;
	default:
		break;
	}
}
int judge(char board[ROW][COL])
{
	int i; 
	for (i = 0; i < ROW; i++)
	{
		if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] == '@') ||
			(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] == '@') ||
			(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == '@') ||
			(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] == '@'))
		{
			return 1;
		}
		else if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] == '#') ||
			(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] == '#') ||
			(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == '#') ||
			(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] == '#'))
		{
			return 2;
		}
	}
}
int Full(char board[ROW][COL])
{
	int j; int z;
	for (z = 0; z < ROW; z++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[z][j]==' ')
				return 3;
		}
	}
	return 4;
}

void game(int o)
{
	int count=1;
	srand((unsigned int)time(NULL));
	initibd(board);
	system("cls");
	printf("\n\n开始游戏\n");
	Sleep(600);
	system("cls");
	if (o == 0)
	{
		printf("\n\n\n*智械系统已装载*");
		Sleep(600);
		system("cls");
	}
	display();
	while (1)
	{
		playermove(board);
		if (count > 2)
		{
			if (o == 0 && judge(board) == 1)
			{
				printf("#######################\n");
				printf("##<!*&*区区智械!*&*!>##\n");
				printf("#######################\n");
				break;
			}
			else{
				win(judge(board));
				if (judge(board) == 1 || judge(board) == 2)
					break;
				}
			win(Full(board));
			if (Full(board) != 3)
				break;
		}
		printf("AI行动中.");
		Sleep(300);
		system("cls");
		display();
		printf("AI行动中..");
		Sleep(300);
		system("cls");
		display();
		printf("AI行动中...");
		Sleep(250);
		system("cls");
		display();
		aimove(o);
		if (count > 2)
		{
			win(judge(board));
			if (judge(board) == 1 || judge(board) == 2)
				break;
			win(Full(board));
			if (Full(board) != 3 )
				break;
		}
		count++;
	}
	
}
