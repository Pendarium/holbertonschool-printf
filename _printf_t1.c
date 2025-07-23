#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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


/**
 * _printf - Custom printf function
 * @format: The format string
 * 2 cases: %d, %i
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL) /* Vérifie si la chaîne est NULL */
	{
		return (-1);
	}
	while (format[i] != '\0') /* Détection du texte */
	{
		if (format[i] == '%')  /* Si on trouve un % */
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				/* Cas du d ou i - Entier décimal signé */
				count += print_number(va_arg(args, int));
				i += 2;  /* Avance après % et d/i */
			}
			else
			{
				_putchar(format[i]); /* Affiche % si n'est pas suivi d'un format valide */
				count++;  
				i++;  /* Avance d'un caractère */
			}
		}
		else
		{
			_putchar(format[i]);/* Affiche un caractère normal */
			count++;  /* Comptabilise le caractère normal */
			i++;  /* Avance d'un caractère */
		}
	}
	va_end(args);
	return (count); /* Retourne le nombre total de caractères imprimés */
}
