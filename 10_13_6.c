#include <stdio.h>

void copy_ptr(double * source, double * target, int count);

int main(void)
{
	int i, j;
	double * source, * target;

	double arr[2][3] = {
		{0.0, 1.1, 4.4},
		{2.2, 3.3, 6.6}
	};

	double arr2[2][3];

	for (i = 0; i < 2; i++)
	{
		source = *(arr + i);
		target = *(arr2 + i);

		copy_ptr(source, target, 3);
	}

	for (i = 0; i < 2; i++)
	{
		for ( j = 0; j < 3; ++j)
		{
			printf("%lf ", arr2[i][j] );
		}
		printf("\n");
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
