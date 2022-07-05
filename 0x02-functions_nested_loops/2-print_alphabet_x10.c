#include <stdio.h>

/**
  * print_alphabet_x10 - Print alphabet on ten lines
  *
  * Return void
  */
void print_alphabet_x10(void)
{
	char c;
	int k = 0;

	while (k <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}

		putchar('\n');

		k++;
	}
}
