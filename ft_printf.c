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
	counts = 0;
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
				counts += ft_hexa(va_arg(args, long));
			else if (format[i] == 'X')
				counts += ft_Hexa(va_arg(args, long));
			else if (format[i] == 'u')
					counts += ft_unsigned(va_arg(args, unsigned int));
			else if (format[i] == 'p')
			{
				counts += ft_putchar('0');
				counts += ft_putchar('x');
				counts += ft_addr(va_arg(args, void *));
			}
			else if (format[i] == '%')
				counts += ft_percent(va_arg(args, int));
		}
		else
			counts += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (counts);
}
