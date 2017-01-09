#include <stdio.h>

double get_double();

double get_avg(double (*ptr)[5], int len);

double get_max(double (*ptr)[5], int len );

void get_line_avg(double (*ptr)[5], int len);


int main(void)
{
	double arr1[3][5];
	int i , j;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr1[i][j] = get_double();
		}
	}

	get_line_avg(arr1, 3);

	printf("max number is %lf\n", get_max(arr1, 3));
	printf("avg is %lf\n", get_avg(arr1, 3) );

	return 0;
}


double get_double()
{
	double f;
	char ch;
	while (scanf("%lf", &f) != 1)
	{
		while ((ch = getchar()) != '\n')
		{
			putchar(ch);
		}
		printf(" is not a number.\nPlease enter value such as 25 1e1 1.1 \n");
	}

	while (getchar() != '\n')
		continue;

	return f;
}

double get_avg(double (*ptr)[5], int len)
{
	double total;
	int count, i, j;
	for ( i = 0, total = 0, count = 0; i < len; i++)
	{
		for ( j = 0 ; j < 5; j++)
		{
			total += *(*(ptr + i) + j);
			count++;
		}
	}

	return (total / count);
}

void get_line_avg(double (*ptr)[5], int len)
{
	double total;
	int i, j;

	for ( i = 0; i < len; i++)
	{
		for ( j = 0, total = 0 ; j < 5; j++)
		{
			total += *(*(ptr + i) + j);
		}
		printf("line %d avg is %lf \n", i + 1, total / 5 );
	}
}

double get_max(double (*ptr)[5], int len )
{
	double max, current;
	int i, j;
	for ( i = 0, max = (*(*(ptr + i))); i < len; i++)
	{
		for ( j = 0 ; j < 5; j++)
		{
			current = *(*(ptr + i) + j);
			max =  current > max ? current : max;
		}
	}


	printf(" max is %lf\n", max);
	return max;
}
