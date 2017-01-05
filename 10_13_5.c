#include <stdio.h>

double sub(double * ptr, int len);

int main(void)
{

	double m = sub((double []) {0.1, 3.1, 9.2, 29.3, 5.2}, 5);

	printf("max idex is %lf\n", m);
	return 0;
}

double sub(double * ptr, int len)
{
	int i;
	double min, max, current;

	for (i = 0, min = *(ptr + i), max = *(ptr + i); i < len; i++)
	{
		current = *(ptr + i);
		if (current < min)
		{
			min = current;
		}

		if (current > max)
		{
			max = current;
		}
	}

	return (max - min);
}
