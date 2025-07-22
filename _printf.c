#include "main.h"

int _printf(const char *format, ...)
{
	size_t i = 0;

	va_list args;
	va_start (args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i] + 1 == '%')
			{
				_putchar('%');
				i++;
				continue;
			}
			else if (format[i] + 1 == 'c')
			{
				char result = va_arg(args, int);
				_putchar(result);
				i++;
				continue;
			}
			else if (format[i] + 1 == 's')
			{
				char *result = va_arg(args, char*);
				_puts(result);
				i++;
				continue;
			}
		}
		else
		{
			_putchar (format[i]);
			i++;
		}
	}
	va_end(args);
	
return(0);
}
