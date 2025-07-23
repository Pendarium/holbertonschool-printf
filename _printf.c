#include "main.h"

/**
 * _printf - Fonction qui imprime une chaîne formatée, similaire à printf.
 * @format: Chaîne constante contenant le texte à imprimer ainsi que des
 *          spécificateurs de format (comme %c, %s, %%).
 *
 * Description: Cette fonction parcourt la chaîne de format fournie,
 * imprime les caractères ordinaires directement, et interprète les
 * spécificateurs de format pour afficher les arguments passés.
 * Elle gère les formats %c (caractère), %s (chaîne) et %% (pourcentage).
 *
 * Return: Le nombre total de caractères imprimés (hors caractère nul).
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
