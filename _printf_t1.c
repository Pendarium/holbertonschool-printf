#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * 2 cases: %d, %i
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list args;

	va_start(args, format);

	/* Vérifie si la chaîne est NULL */
	if (format == NULL)
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
				count += print_numbers(va_arg(args, int));
				i += 2;  /* Avance après % et d/i */
				return (i);
			}
			else
			{
				/* Affiche % si ce n'est pas suivi d'un format valide */
				_putchar(format[i]);
				count++;  /* Comptabilise le % */
				i++;  /* Avance d'un caractère */
			}
		}
		else
		{
			/* Affiche un caractère normal */
			_putchar(format[i]);
			count++;  /* Comptabilise le caractère normal */
			i++;  /* Avance d'un caractère */
		}
	}
	va_end(args);
	return (count); /* Retourne le nombre total de caractères imprimés */
}