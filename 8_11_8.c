#include <stdio.h>

void showMessage();
char get_first(void);
float getnum(void);

int main(void)
{
	float num1;
	float num2;
	float result;

	char choice;

	showMessage();

	while ((choice = get_first()) != 'q')
	{

		printf("Enter the first number\n");
		num1 = getnum();

		printf("Enter the second number\n");
		num2 = getnum();

		switch (choice)
		{
		case 'a':
			result = num1 + num2;
			break;
		case 'b':
			result = num1 - num2;
			break;
		case 'c':
			result = num1 * num2;
			break;
		case 'd':
			while (num2 == 0)
			{
				printf("Enter a number other than 0\n");
				num2 = getnum();
			}
			result = num1 / num2;
			break;
		default:
			return 0;
		}

		printf("The result is [%f]\n", result);
		showMessage();
	}

	printf("bye\n");

	return 0;
}

void showMessage()
{
	printf("***********************************************************\n");
	printf("Enter the operation of your choice :\n");
	printf("a) add                    b) subtract\n");
	printf("c) multiply               d) devide\n");
	printf("q) quit");
	printf("***********************************************************\n");
}

float getnum()
{
	float f;
	char ch;
	while (scanf("%f", &f) != 1)
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

char get_first()
{
	int ch;


	ch = getchar();
	while (!(ch == 'a' || ch == 'b' || ch == 'c' || ch == 'd' || ch == 'q'))
	{
		while (getchar() != '\n')
			continue;

		printf("Please enter a valid option \n");
		ch = getchar();
	}

	while (getchar() != '\n')
	{
		continue;
	}
	return ch;
}