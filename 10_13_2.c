#include <stdio.h>

void copy_arr(double source[], double target[], int count);
void copy_ptr(double * source, double * target, int count);

int main(void)
{
	int i;
	double source[5] = {0, 1.1, 2.2, 3.3, 4.4};
	double target1[5], target2[5];

	copy_arr(source, target1, 5);
	copy_ptr(source, target2, 5);

	for (i = 0; i < 5; i++)
	{
		printf("%lf ", target1[i]);
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%lf ", target2[i]);
	}
	printf("\n");

	return 0;
}

void copy_arr(double source[], double target[], int count)
{
	int i;
	for (int i = 0 ; i < count; ++i)
	{
		target[i] = source[i];
	}
}

void copy_ptr(double * source, double * target, int count)
{
	int i = 0;
	for (; i < count; i++)
	{
		*(target + i) = *(source + i);
	}
}
