#include <stdio.h>

int main()
{
	int a[10] = {2,11,3,6,1,77,22,15,23,9};

	int i, j, temp;

	for(i = 0; i < 10 - 1; i++)
	{
		for(j = 0; j < 10 - 1 - i; j++)
		{
			if(a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for(i = 0; i < 10; i++)
	{
		printf("%5d", a[i]);
	}

	printf("\n");
	return 0;
}


