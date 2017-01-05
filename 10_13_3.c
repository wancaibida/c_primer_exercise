#include <stdio.h>

int max(int arr[], int len);

int main(void)
{
	int m = max((int []) {0, 3, 1, 2, 5}, 5);

	printf("max is %d\n", m);
	return 0;
}

int max(int arr[], int len)
{
	int i;
	int max = arr[0];

	for (i = 0; i < len; i++)
	{
		max = (arr[i] > max) ? arr[i] : max;
	}
	return max;
}
