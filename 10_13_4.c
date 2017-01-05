#include <stdio.h>

int max_idx(double * ptr, int len);

int main(void)
{

	int m = max_idx((double []) {0.0, 3.1, 9.2, 29.3, 5.2}, 5);

	printf("max idex is %d\n", m);
	return 0;
}

int max_idx(double * ptr, int len)
{
	int i, index, max;

	for (i = 0, index = i, max = *(ptr + i); i < len; i++)
	{
		if (*(ptr + i) > max)
		{
			max = *(ptr + i);
			index = i;
		}
	}
	return index;
}
