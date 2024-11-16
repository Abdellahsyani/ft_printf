#include "printf.h"

/**
 * ft_putchar - printer function
 * @c: the character that will print
 */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
