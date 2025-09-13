#include "ft_printf.h"

int	ft_print_str(char *str)
{
	if (!str)
		str = "(null)";
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}
