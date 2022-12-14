#include <stdio.h>

/**
 * main - print single numbers in base 10
 * Return: 0
 */

int main(void)
{

	for (int i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
