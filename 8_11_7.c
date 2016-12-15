#include <stdio.h>
#define PAY_HOUR1 8.75
#define PAY_HOUR2 9.33
#define PAY_HOUR3 10.0
#define PAY_HOUR4 11.2

#define MAX_HOUR 40
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25

void showMessage();
float calcTotalPay(float hour, float payRate);
float calcPayAfterRate(float total);
char get_first(void);


int main(void)
{
	float hour;
	float total;
	float total2;

	char choice;

	showMessage();


	while ((choice = get_first()))
	{
		float payRate;
		switch (choice)
		{
		case 'a':
			payRate = PAY_HOUR1;
			break;

		case 'b':
			payRate = PAY_HOUR2;
			break;

		case 'c':
			payRate = PAY_HOUR3;
			break;

		case 'd':
			payRate = PAY_HOUR4;
			break;

		case 'q':
			printf("bye\n");
			return 0;
		default:
			return 0;
		}

		printf("enter your work hours \n");
		scanf("%f", &hour);

		total = calcTotalPay(hour, payRate);
		total2 = calcPayAfterRate(total);

		printf("you money before %f ,after %f\n", total, total2 );

		showMessage();
	}

	return 0;
}

void showMessage()
{
	printf("***********************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("a) $%.2fhr                    b) $%.2f\n", PAY_HOUR1, PAY_HOUR2);
	printf("c) $%.2fhr                    d) $%.2f\n", PAY_HOUR3, PAY_HOUR4);
	printf("q) quit");
	printf("***********************************************************\n");
}

float calcTotalPay(float hour, float payRate)
{
	float total;
	if (hour < MAX_HOUR)
	{
		total = hour * payRate;
	}
	else
	{
		total = 40 * payRate + (hour - 40) * 1.5 * payRate;
	}

	return total;
}

float calcPayAfterRate(float total)
{
	float total2;
	if (total < 300)
	{
		total2 = total * (1 - RATE1);
	}
	else if (total < 450)
	{
		total2 = 300 * (1 - RATE1) + (total - 300) * (1 - RATE2);
	}
	else
	{
		total2 = 300 * (1 - RATE1) + 150 * (1 - RATE2) + (total - 450) * (1 - RATE3);
	}
	return total2;
}

char get_first()
{
	int ch;


	do
	{
		ch = getchar();
	} while (ch == ' ' || ch == '\n');

	while (getchar() != '\n')
	{
		continue;
	}
	return ch;
}