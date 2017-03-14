#include <stdio.h>
#include <math.h>
#include <string.h>

int atoi(char * ptr);
double power(double base , int n);

int main(void)
{
	char str[10];

	while (scanf("%s", str))
	{
		printf("Your number is %d \n", atoi(str));
	}

	return 0;
}

int atoi(char * ptr)
{
	size_t len;
	int num, i, j;
	char c;
	num = 0;
	len = strlen(ptr);

	for (i = len - 1, j = 0; i > -1; --i, ++j)
	{
		char c = (*(ptr + i));
		if (c < '0' || c > '9')
		{
			return -1;
		}
		num += (c - '0') * power(10, j);
	}

	return num;
}

double power(double base , int n)
{
	double sum;
	int flag = 0;
	if (fabs(base) < 10e-7)
	{
		return 0.0;
	}

	if (n == 0)
	{
		return 1.0;
	}

	n = n > 0 ? n : -n;

	sum = base;
	while (--n)
	{
		sum *= base;
	}

	return flag ? 1 / sum : sum;
}