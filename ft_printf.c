/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:31:25 by asyani            #+#    #+#             */
/*   Updated: 2024/11/17 13:54:42 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	counts;

	i = 0;
	counts = 1;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
				counts += ft_putnbr(va_arg(args,  int));
			else if (format[i] == 's')
				counts += ft_putstr(va_arg(args, char *));
			else if (format[i] == 'c')
				counts += ft_putchar(va_arg(args, int));
			else if (format[i] == 'x')
				counts += ft_hexa(va_arg(args, int));
			else if (format[i] == 'X')
				counts += ft_Hexa(va_arg(args, int));
			else if (format[i] == 'u')
					counts += ft_unsigned(va_arg(args, int));
			else if (format[i] == 'p')
			{
				ft_putchar('0');
				ft_putchar('x');
				counts += ft_addr(va_arg(args, void *));
			}
		}
		else
			counts += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (counts);
}

int main()
{
	char name[] = "abdellah";
	int age = 26;
	char c = 'A';
	int a = 808689;
	int *x;

	x = &a;
	printf("%p\n", x);
	int i = ft_printf("hello ma name is %s and I am %d and the %c\n", name, age, c);
	ft_printf("%d\n", i);
	int o = printf("hello ma name is %s and I am %d and the %c\n", name, age, c);
	printf("%d", o);
}
