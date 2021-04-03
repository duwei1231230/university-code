#include <stdio.h>
int main()
{
	int num[] = {2,5,4,8,6,12,45,47,12,32,5,62,15,98,48,16,20,10,31,65,47,91,123};
	int sz = sizeof(num)/sizeof(num[0]);
	int i, j;
	for (i = 0;i<sz-1;i++)
	{
		int flag = 1; /*这里设置这个是为了优化,就是当提前排序好了以后,就不再排序*/
		for (j = 0;j<sz-1;j++)
		{
			if (num[j] < num[j])
			{
				int tmp = num[j+1];  /*大小交换*/
				num[j] = num[j+1];
				num[j+1] = tmp;
				flag = 0;
			}
		}
		if (flag)
			break;
	}
	for (i = 0;i<sz;i++)
	{
		printf("%d", num[i]);
	}
	return 0;
}