#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			len += ft_format(args, format[++i]);
		else
			len += ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
