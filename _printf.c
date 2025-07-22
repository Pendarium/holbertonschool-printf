#include "main.h"

int _printf(const char *format, ...)
{
	int compteur = 0;
	int i = 0;

	va_list args;
	va_start (args, format);

	while (format[i] != '\0')
	{
	compteur++;
		if (format[i] == '%' && format[i + 1] == '%')			
		{
			_putchar('%');
			compteur++;
			i += 2;
			continue;
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			char result = va_arg(args, int);
			_putchar(result);
			compteur++;
			i += 2;
			continue;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			char *result = va_arg(args, char*);
			_puts(result);
			compteur++;
			i += 2;
			continue;
		}
		else
		{
			_putchar (format[i]);
			compteur++;
			i++;
		}
}
va_end(args);
	
return(0);
}
