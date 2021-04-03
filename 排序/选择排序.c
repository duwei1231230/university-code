#include <stdio.h>
int main()
{
	int a[20] = {2,4,5,3,1,5,5,6,12,13,15,34,21,16,10,22,32,45,14,48 };
	int i, j, k;
	for (i = 0; i < 20; i++)
	{
		j = i;   /*默认a[j]是最小的数字*/
		for (k = j + 1; k < 20; k++)
		{
			if (a[k] < a[j])  /*如果碰到更小的数字,j就是更小的数字的下标*/
				j = k;
		}
		/*循环完毕,j就是最小的数字的下标*/
		int tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;/*大小交换*/
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}