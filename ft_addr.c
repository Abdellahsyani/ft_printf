/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:57:21 by asyani            #+#    #+#             */
/*   Updated: 2024/11/17 16:03:47 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/**
 * ft_addr - print address function in hex
 * @v: void pointer to accept any address
 *
 * return: how many character in the address
 */

int	ft_addr(void *v)
{
	char		*p;
	int			count;
	uintptr_t	add;

	count = 0;
	if (v == NULL)
	{
		write(1, "(nil)", 5);
		return (1);
	}
	else
	{
		count += ft_putchar('0');
		count += ft_putchar('x');
	}
	add = (uintptr_t)v;
	p = "0123456789abcdef";
	if (add < 16)
	{
		ft_putchar(p[add]);
		return (1);
	}
	count += ft_addr((void *)(add / 16));
	ft_putchar(p[add % 16]);
	return (count + 1);
}
