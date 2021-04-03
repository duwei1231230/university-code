//#include <stdlib.h>
#include <stdio.h>
int main()
{
	int a[20] = {2,4,5,3,1,5,5,6,12,13,15,34,21,16,10,22,32,45,14,48 };
	int b[50] = {0}; /*最大数字开辟空间*/
	int i,j;
	for (i = 0; i < 20; i++)
		b[a[i]]++;
	for (j = 0; j < 50; j++)
	{
		if (b[j])
			for (i = 1; i <= b[j];i++)
				printf("%d ", j);
	}
	return 0;
}