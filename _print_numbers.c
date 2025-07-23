#include "main.h"

/**
* print_number - integer to be printed
* @n: the numbers
*
* Return: The number printed
*/
int print_number(int n)
{
	unsigned int num;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar ('-');
		count++;
		num = -n;
	}

	else
	{
	num = n;
	}

	if (num / 10)
	{
		count += print_number(num / 10);
	}

_putchar((num % 10) + '0');
count++;

return (count);
}