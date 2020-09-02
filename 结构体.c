#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct Card
{
	int ATK;
	int HP;
	int COST;
	char EFFECT[20];

};
int main()
{
	struct Card 死亡之翼=
	{ 12, 12, 10, "战吼：释放大灾变"};
	printf("COST=%d\n", 死亡之翼.COST);
	printf("ATK=%d\n", 死亡之翼.ATK);
	printf("HP=%d\n", 死亡之翼.HP);
	printf("%s\n", 死亡之翼.EFFECT);
		return 0;
}
