#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - main function
 * @n: determinant variable
 * Return: void in this function
 */
void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < i; x++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
