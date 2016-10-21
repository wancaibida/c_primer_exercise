#include <stdio.h>

int main(void)
{
	char a,b,c,d,e;
	a=65;
	b='A';
	c='\101';
	d='\x41';
	e=0X41;

	printf("%c %c %c %c %c\n", a,b,c,d,e);
	return 0;
}
