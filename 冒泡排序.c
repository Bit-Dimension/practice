#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void bs(int sz,int arr[])
{
	int j; int i;
	for (i = 0; i < sz - 1; i++)  //共进行sz-1趟冒泡排序
	{
		int flag=1;//假设数组有序
		for (j = 0; j < sz - 1-i; j++)  //一趟排序//第i位至多只需进行sz-1-i次比较
		{
			
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag=0;//本趟排序前不完全有序
			}
			
		}
		if(flag==1)
			break;
	}
}
int main()
{
	int i=0;
	int arr[] = {64684,848,99999,233,846,13302};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bs(sz,arr);
	for ( i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
