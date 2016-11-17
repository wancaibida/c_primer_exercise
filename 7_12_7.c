#include <stdio.h>
#define PAY_HOUR 10.0
#define MAX_HOUR 40
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25

int main(void)
{
	float hour;
	float total;
	float total2;

	scanf("%f",&hour);

	if(hour<MAX_HOUR)
	{
		total = hour*PAY_HOUR;
	}
	else
	{
		total = 40*PAY_HOUR +(hour-40)*1.5*PAY_HOUR;
	}

	if(total<300){
		total2=total*(1-RATE1);
	}
	else if (total <450)
	{
		total2 = 300*(1-RATE1) +(total-300)*(1-RATE2);
	}
	else
	{
		total2 = 300*(1-RATE1) +150*(1-RATE2)+(total-450)*(1-RATE3);
	}

	printf("you workd %f hours and earned money is %f \n", hour,total2);
	return 0;
}