#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_format(va_list args, char specifier);

int		ft_putchar(char c);
int		ft_print_str(char *str);
int		ft_print_char(char c);
int		ft_print_nbr(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex(unsigned int n, int uppercase);
int		ft_print_ptr(void *ptr);
int		ft_print_percent(void);

int		ft_strlen(char *str);
void	ft_putchar_fd(char c, int fd);
int		ft_nbrlen(int n);

#endif
