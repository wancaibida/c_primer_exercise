#include <stdio.h>


void to_base_n(int num, int base);

int main(void)
{
	int num = 129;
	int p = 10;
	printf("%d in %d mode is ", num , p);
	to_base_n(num, p);
	return 0;
}

void to_base_n(int num, int base)
{
	int r;
	r = num % base;

	if (num >= base)
	{
		to_base_n(num / base, base);
	}

	putchar('0' + r);

	return;
}



