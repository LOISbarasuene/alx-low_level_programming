#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc: counts argument
 * @argv: array of pointer
 * Return: 0 for success
 */

int main(int argc,  char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
