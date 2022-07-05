#include <unistd.h>

/**
 * prints the character c to the stdout
 * .@c the charcter to print
 *
 * Return: On Succcess 1
 * On error, -1 is returned, and erron is set appopriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
