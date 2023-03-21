#include "main.h"

/**
 * _isalpha - check main
 * @c: An input character
 * Description: function returns 1 if the character
 * is a letter, lowercase or uppercase.
 * Return: 1, otherwise 0.
 */

int _isalpha(int c)
{
	char upper, lower;
	int isletter = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			if (c == upper || c == lower)
				isletter = 1;
		}
	}
	return (isletter);
}
