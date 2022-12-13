#include <stdio.h>

/**
 * main - print alphabets in lowercase except q and e
 * Return: 0
 */

int main(void)
{
	char ba;

	for (ba = 'a'; ba <= 'z'; ba++)
	{
		if (ba != 'e' && ba != 'q')
			putchar(ba);
	}
	putchar('\n');
	return (0);
}
