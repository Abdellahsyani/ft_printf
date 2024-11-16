#include "printf.h"

/**
 * ft_putstr - function that print strings
 * @str: the string that will print
 */

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
