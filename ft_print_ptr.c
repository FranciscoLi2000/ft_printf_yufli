#include "ft_printf.h"

static void	ft_put_ptr_hex(unsigned long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_put_ptr_hex(n / 16);
	ft_putchar(base[n % 16]);
}

static int	ft_ptr_len(unsigned long n)
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

int	ft_print_ptr(void *ptr)
{
	unsigned long	addr;
	int				len;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	addr = (unsigned long)ptr;
	write(1, "0x", 2);
	ft_put_ptr_hex(addr);
	len = ft_ptr_len(addr) + 2;
	return (len);
}
