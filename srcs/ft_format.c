#include "ft_printf.h"

int	ft_format(va_list args, char specifier)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (specifier == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	else if (specifier == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	else if (specifier == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	else if (specifier == '%')
		return (ft_print_percent());
	return (0);
}
