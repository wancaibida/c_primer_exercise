#include <stdio.h>

double get_double();

double get_avg(int x, int y, double ptr[x][y]);

double get_max(int x, int y, double ptr[x][y]);

void get_line_avg(int x, int y, double ptr[x][y]);


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

	get_line_avg(3, 5, arr1);

	printf("max number is %lf\n", get_max(3, 5, arr1));
	printf("avg is %lf\n", get_avg(3, 5, arr1) );

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

double get_avg(int x, int y, double ptr[x][y])
{
	double total;
	int count, i, j;
	for ( i = 0, total = 0, count = 0; i < x; i++)
	{
		for ( j = 0 ; j < y; j++)
		{
			total += *(*(ptr + i) + j);
			count++;
		}
	}

	return (total / count);
}

void get_line_avg(int x, int y, double ptr[x][y])
{
	double total;
	int i, j;

	for ( i = 0; i < x; i++)
	{
		for ( j = 0, total = 0 ; j < y; j++)
		{
			total += *(*(ptr + i) + j);
		}
		printf("line %d avg is %lf \n", i + 1, total / 5 );
	}
}

double get_max(int x, int y, double ptr[x][y])
{
	double max, current;
	int i, j;
	for ( i = 0, max = (*(*(ptr + i))); i < x; i++)
	{
		for ( j = 0 ; j < y; j++)
		{
			current = *(*(ptr + i) + j);
			max =  current > max ? current : max;
		}
	}


	printf(" max is %lf\n", max);
	return max;
}
