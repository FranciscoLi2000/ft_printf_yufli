#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	ft_putnbr(n);
	return (ft_nbrlen(n));
}
