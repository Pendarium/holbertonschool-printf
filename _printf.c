#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * 3 cases : %%, %c, %s
 * 
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{

	int i = 0;
	int count = 0;
	va_list args;

	va_start (args, format);

	while (format[i] != '\0' && format[i] != '%') /*detection du texte*/
	{
		_putchar (format[i]);
			count++;
			i++;
			
			if (format[i] == '%' && format[i + 1] == '%')/*cas du %*/
			{
				_putchar('%');
				count++;
				i += 2;


			}
			else if (format[i] == '%' && format[i + 1] == 'c')/*cas du int*/
			{
				char result = va_arg(args, int);

				_putchar(result);
				count++;
				i += 2;


			}
			else if (format[i] == '%' && format[i + 1] == 's')/*cas du str*/
			{
				char *result = va_arg(args, char*);

				_puts(result);
				count++;
				i += 2;
				
			}

	}
	

va_end(args);

return(i);
}
