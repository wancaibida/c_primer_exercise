#include <stdio.h>
#define RATE1 0.15f
#define RATE2 0.28f

void showMessage();

int main(void)
{
	int choice,start;
	float salary,tax;

	showMessage();

	while(scanf("%d",&choice))
	{
		switch(choice)
		{
			case 1:
			start = 17850;
			break;

			case 2:
			start = 23900;
			break;

			case 3:
			start = 29750;
			break;

			case 4:
			start = 14875;
			break;

			default:
			return 0;
		}

		printf("please enter you salary \n");
		scanf("%f",&salary);

		if(salary>start)
		{
			tax = start * RATE1 + (salary-start)*RATE2;
		}
		else
		{
			tax = salary * RATE1;
		}

		printf("you tax is %f\n", tax);

		showMessage();
	}



	return 0;
}

void showMessage()
{
	printf("***********************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) DANSHEN                    2) HUZHU \n");
	printf("3) YIHUN GONGYOU              4) YIHUN LIYI\n");
	printf("5) quit\n");
	printf("***********************************************************\n");
}
