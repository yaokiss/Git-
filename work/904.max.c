#include <stdio.h>

int main()
{
	int a[10] = {2,11,3,6,1,77,22,15,23,9};
	int i, max = a[0], index = 0;

	for(i = 1; i < 10  ; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			index = i;
		}
	}

	printf("index = %d, max = %d\n", index, max);

	return 0;
}


