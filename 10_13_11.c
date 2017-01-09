#include <stdio.h>
#define MONTHS 12
#define YEARS 5

float year_avg(int years, int months, float arr[years][months]);

void month_avg(int years, int months, float arr[years][months]);

int main(void)
{
	const float rain[YEARS][MONTHS] = {
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
		{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
		{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
	};

	int year, month;
	float subtot, total;

	printf("year avg rain %f \n", year_avg(YEARS, MONTHS, rain));

	month_avg(YEARS, MONTHS, rain);

	return 0;
}

float year_avg(int years, int months, float arr[years][months])
{
	float subtot, total;
	int i, j;

	for (i = 0, total = 0; i < years; i++)
	{
		for (j = 0, subtot = 0; j < months; j++)
		{
			subtot += *(*(arr + i) + j);
		}

		total += subtot;
	}

	return (total / years);
}

void month_avg(int years, int months, float arr[years][months])
{
	float subtot, total;
	int i, j;

	for (i = 0, total = 0; i < months; i++)
	{
		for (j = 0, subtot = 0; j < years; j++)
		{
			subtot += *(*(arr + j) + i);
		}
		printf("month %d ,avg %2f\n", 1 + months, subtot / years);
	}
}







