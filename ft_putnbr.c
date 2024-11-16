#include "printf.h"

/**
 * helper - this function is a helper for convert int
 * @n: the number to print
 */

static void	helper(int n)
{
	if (n > 9)
	{
		helper(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

/**
 * ft_integers - function that print all int
 * @n: the integer that will print
 */

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		helper(-n);
	}
	else
		helper(n);
}
