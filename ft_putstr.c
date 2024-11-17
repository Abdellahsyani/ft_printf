#include "printf.h"

/**
 * ft_putstr - function that print strings
 * @str: the string that will print
 */

int	ft_putstr(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		count++;
		i++;
	}
	return (count);
}
