#include <stdio.h>
#include <ctype.h>

void in_word(int * ptr);

void out_word(int * flagPtr, int * count_ptr);

int main(void)
{
	char c;
	int flag;
	int word_count, upper_count, lower_count, comma_count, number_count;
	flag = 0;
	word_count = 0;
	upper_count = 0;
	lower_count = 0;
	comma_count = 0;
	number_count = 0;

	while ((c = getchar()) != EOF)
	{
		if (isupper(c))
		{
			in_word(&flag);

			++upper_count;
		}
		else if (islower(c))
		{
			in_word(&flag);
			++lower_count;
		}
		else if (isdigit(c))
		{
			out_word(&flag, &word_count);
			++number_count;
		}
		else
		{
			out_word(&flag, &word_count);
			++comma_count;
		}
	}

	printf("word count %d ,upper count %d ,lower count %d ,comma_count %d,number_count %d\n", word_count, upper_count, lower_count, comma_count, number_count );


	return 0;
}

void in_word(int * ptr)
{
	int flag = *ptr;

	if (!flag)
	{
		*ptr = 1;
	}
}

void out_word(int * flagPtr, int * count_ptr)
{
	int flag = * flagPtr;

	if (flag)
	{
		++(*count_ptr);
		*flagPtr = 0;
	}
}