#include <stdio.h>

/**
  * print_alphabet - Make alphabet
  *
  * print_alphabet_x10 - Print the result from print_alphabet 10 times
  *
  * Return: void by both functions
  */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}

void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		print_alphabet();
	}
}
