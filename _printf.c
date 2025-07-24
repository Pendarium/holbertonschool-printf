#include "main.h"

/**
 * _printf - Fonction qui implémente une version simplifiée de printf.
 * @format: La chaîne de format à afficher.
 *
 * Description: Cette fonction traite les spécificateurs de format
 * et affiche les arguments correspondants.
 *
 * Return: Le nombre de caractères affichés.
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
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{count += print_number(va_arg(args, int));
				i += 2; }
			else if (format[i + 1] == '\0')
			{return (-1); }
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
