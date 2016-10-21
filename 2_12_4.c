#include <stdio.h>

void printFirst(void);
void printLast(void);

int main(void)
{
	printFirst();
	printf("For he's a jolly good fellow\n");
	printf("For he's a jolly good fellow\n");
	printLast();
	return 0;
}

void printFirst()
{
	printf("For he's a jolly good fellow\n");
}

void printLast()
{
	printf("Whitch nobody can deny!\n");
}
