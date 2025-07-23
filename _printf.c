#include "main.h"

/**
 * _printf - Imprime une chaîne formatée sur la sortie standard
 * @format: chaîne de format contenant les spécificateurs
 *
 * Cette fonction prend en charge les spécificateurs suivants :
 * %c : imprime un caractère
 * %s : imprime une chaîne de caractères
 * %% : imprime le caractère '%'
 *
 * Retour: le nombre total de caractères imprimés
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0, j;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{_putchar('%');
				count++;
				i += 2; }
			else if (format[i + 1] == 'c')
			{char ch = va_arg(args, int);
				_putchar(ch);
				count++;
				i += 2; }
			else if (format[i + 1] == 's')
			{char *str = va_arg(args, char *);
				j = 0;
				if (str == NULL)
					str = "(null)";
				while (str[j])
				{_putchar(str[j]);
					count++;
					j++; }
				i += 2; }
			else
			{_putchar(format[i]);
				_putchar(format[i + 1]);
				count += 2;
				i += 2; } }
		else
		{_putchar(format[i]);
			count++;
			i++; } }
	va_end(args);
	return (count); }
