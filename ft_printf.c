/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:35:52 by asyani            #+#    #+#             */
/*   Updated: 2024/11/16 12:36:37 by asyani           ###   ########.fr       */
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
			if (format[i] == 'd')
				ft_putnbr(va_arg(args,  int));
			else if (format[i] == 's')
				ft_putstr(va_arg(args, char *));
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (counts);
}

int main()
{
	char name[] = "abdellah";
	int age = 26;
	ft_printf("hello ma name is %s and I am %d\n", name, age);
}
