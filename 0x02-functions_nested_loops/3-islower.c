#include "main.h"

/**
 * _islower - checks if a charcter is lower case
 * @c: the character
 * Return: 1 if charcetrr is lowercase, 0 if not
 */

int _islower(int c)
{
	for (c >= 'a' && c <= 'z')
		return (1);
			else
				return (0);
}
