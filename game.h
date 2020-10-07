#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include <stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>


void initibd(char board[ROW][COL]);
void display();
void game(int o);
void playermove(char board[ROW][COL]);
void aimove(int o);
int judge(char board[ROW][COL]);
void win(int n);
int Full(char board[ROW][COL]);
void AI(char z, char board[ROW][COL], int* x, int* y);