#include <stdio.h>

void copy_ptr(double * source, double * target, int count);

int main(void)
{
	double source[7] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
	double target[3];

	copy_ptr(source + 2, target, 3);

	for (int i = 0; i < 3; i++)
	{
		printf("%lf ", *(target + i));
	}

	return 0;
}

void copy_ptr(double * source, double * target, int count)
{
	int i = 0;
	for (; i < count; i++)
	{
		*(target + i) = *(source + i);
	}
}
