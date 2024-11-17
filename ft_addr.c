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

int	ft_addr(void *v)
{
	char	*p;
	int	count;
	uintptr_t add;

	add = (uintptr_t)v;
	p = "0123456789abcdef";
	count = 0;
	if (add < 16)
	{
		ft_putchar(p[add]);
		return (1);
	}
	count += ft_addr((void *)(add / 16));
	ft_putchar(p[add % 16]);
	return (count + 1);
}
