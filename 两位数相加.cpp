#include <stdio.h>
int main()
{int num1=0;
int num2=0;
int sum=0;
printf("输入两个数字完成加法，数字间用空格隔开，输入完成后按回车执行\n");
scanf("%d%d",&num1,&num2);
sum=num1+num2;
	printf("sum=%d\n",sum);
	return 0;
}
