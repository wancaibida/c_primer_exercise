#include <stdio.h>

void double_arr(int (*arr)[5], int len);
void print_arr(int (*arr)[5], int len);



int main(void)
{
	int arr1[3][5] = {
		{2, 4, 5, 8, 1},
		{3, 5, 7, 2, 1},
		{4, 6, 8, 2, 3}
	};

	double_arr(arr1, 3);
	print_arr(arr1, 3);

	return 0;
}

void double_arr(int (*arr)[5], int len)
{
	int i, j;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			(*(*(arr + i) + j)) *= 2;
		}
	}
}

void print_arr(int (*arr)[5], int len)
{
	int i, j;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", (*(*(arr + i) + j)));
		}

		printf("\n");
	}
}



