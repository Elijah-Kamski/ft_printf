#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>

# define HEX_LOW "0123456789abcdef"
# define HEX_UPP "0123456789ABCDEF"




int		ft_printf(const char *str, ...);
void	ft_printchar_pf(char c, long int *len);
void	ft_printstr_pf(char *s, long int *len);
void	ft_printnbr_pf(int n, long int *len);
void	ft_printhex_pf(unsigned int n, int is_upper, long int *len);
void	ft_printnumber_pf(long int n, long int *len);
void	ft_printptr_pf(unsigned long int ptr, long int *len);

#endif