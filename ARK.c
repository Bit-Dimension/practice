#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{char option;
char option2;
printf("路边有一个倒地的卡斯特女孩，你要上前看看情况吗？（是输入y；否输入n）>:\n");
scanf("%c",&option);
if(option=='y')
{printf("八个面相凶恶的壮汉将你围了起来\n接下来准备怎么做？\n（火山糊脸输入f；转身开溜输入e）>:\n");
scanf("%c",&option2);
scanf("%c",&option2);
if(option2=='f')
{printf("全歼，火山nb！\n");}
else if(option2=='e')
{printf("被抓住暴打，HP-8\n");}
else
{printf("不要乱按啊kora\n");}}
else if(option=='n')
{printf("你离开了\n");}
else
{printf("不要乱按啊kora\n");}
	return 0;
}
