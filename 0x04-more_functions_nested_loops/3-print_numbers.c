#include <stdio.h>
#include "main.h"

/**
 * print_numbers - numbers printed
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
