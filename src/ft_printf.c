#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed;

	printed = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			printed += handle_type(*format, args);
			format++;
		}
		else
		{
			write(1, format, 1);
			printed++;
			format++;
		}
	}
	va_end(args);
	return (printed);
}
