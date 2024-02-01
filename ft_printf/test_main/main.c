#include "../inc/ft_printf.h"

int	ft_printf(const char *str, ...);

int	main(void)
{
	ft_printf("Hello \n");
	ft_printf("My favorite number is %d \n", 10);
	return(0);
}
