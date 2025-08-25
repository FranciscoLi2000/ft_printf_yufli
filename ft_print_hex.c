#include "ft_printf.h"

static int	ft_hex_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 16;
		len++;
	}
	return (len);
}

static void	ft_put_hex(unsigned int n, int uppercase)
{
	char	*base;

	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		ft_put_hex(n / 16, uppercase);
	ft_putchar(base[n % 16]);
}

int	ft_print_hex(unsigned int n, int uppercase)
{
	ft_put_hex(n, uppercase);
	return (ft_hex_len(n));
}
