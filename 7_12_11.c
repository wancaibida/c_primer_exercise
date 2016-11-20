#include <stdio.h>
#define APPLE 1.25
#define BANANA 0.65
#define PHOTATO 0.89

void showMessage();

int main(void)
{
	float ah,bh,ph,weight;
	float applePrice,bananaPrice,photatoPrice;
	float fruitsPrice,acturallyFruitsPrice;
	float weightTotal,weightPrice;

	char choice;

	ah = bh = ph = 0.0f;
	showMessage();

	while( (choice = getchar()) != 'q')
	{

		printf("your choice is [%c] \n",choice);

		printf("please enter weight\n");
		scanf("%f",&weight);

		printf("your weight is [%f] \n", weight);

		switch(choice)
		{
			case 'a':
			ah =weight;
			break;

			case 'b':
			bh = weight;
			break;

			case 'c':
			ph = weight;
			break;

			default:
			printf("please enter a valid weight\n");
			return 0;
		}

		showMessage();
		getchar();
	}

	applePrice = APPLE * ah;
	bananaPrice = BANANA * bh;
	photatoPrice = PHOTATO * ph;

	fruitsPrice = applePrice + bananaPrice + photatoPrice;
	weightTotal = ah+bh+ph;

	if(fruitsPrice > 100)
	{
		acturallyFruitsPrice = fruitsPrice* 0.95;
	}
	else
	{
		acturallyFruitsPrice = fruitsPrice;
	}

	if(weightTotal<=5)
	{
		weightPrice = 3.5;
	}
	else if (weightTotal < 20)
	{
		weightPrice = 10;
	}
	else
	{
		weightPrice = 8 + weightTotal * 0.1;
	}

	printf("you by %f ponds apple ,total price %f\n",ah,applePrice);
	printf("you by %f ponds banana ,total price %f\n",bh,bananaPrice);
	printf("you by %f ponds photato ,total price %f\n",ph,photatoPrice);
	printf("total fruit price %f ,after promts price %f\n",fruitsPrice,acturallyFruitsPrice );
	printf("total weight %f ,weight price %f\n",weightTotal, weightPrice);

	printf("total price %f\n",weightPrice+acturallyFruitsPrice);

	return 0;
}

void showMessage()
{
	printf("***********************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("a) APPLE                    b) BANANA \n");
	printf("c) PHOTATO                  q) quit\n");
	printf("***********************************************************\n");
}
