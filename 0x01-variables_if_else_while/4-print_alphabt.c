#include <stdio.h>

/**
 * main - print all letters in lowercase except e and q
 * followed by a new line
 * Description - main is the start of the program
 * Return 0 if (Successful)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	if (ch != 'e' && ch != 'q')

	{
	putchar(ch);
	}

	{
		ch++;
	}

	{
putchar('\n');
return (0);
	}
	}}
