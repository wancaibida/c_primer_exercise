#include <stdio.h>

void copy_arr(int rows, int cols, double source[rows][cols], double target[rows][cols]);

void display_arr(int row, int cols, double arr[row][cols]);

int main(void)
{
	double source[3][4] = {
		{0.0, 1.1, 2.2, 3.3},
		{0.0, 2.1, 4.2, 6.3},
		{0.0, 3.1, 5.2, 7.3}
	};
	double target[3][4];

	copy_arr(3, 4, source, target);
	display_arr(3, 4, target);
	return 0;
}

void copy_arr(int rows, int cols, double source[rows][cols], double target[rows][cols])
{
	int i, j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			*(*(target + i) + j) = *(*(source + i) + j);
		}
	}
}

void display_arr(int row, int cols, double arr[row][cols])
{
	int i, j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("%lf ", arr[i][j]);
		}
		printf("\n");
	}
}

