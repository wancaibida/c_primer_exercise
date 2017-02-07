#include <stdio.h>

void add_arr(int * arr1, int * arr2, int * arr3, int len);


int main(void)
{
	int arr1[4] = {2, 4, 5, 8};
	int arr2[4] = {1, 0, 4, 6};
	int arr3[4];

	add_arr(arr1, arr2, arr3, 4);

	for (int i = 0; i < 4; i++)
	{
		printf("%d \n", arr3[i]);
	}
	return 0;
}

void add_arr(int * arr1, int * arr2, int * arr3, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		*(arr3 + i) = *(arr1 + i) + *(arr2 + i);
	}
}



