/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_HEX.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:56:13 by asyani            #+#    #+#             */
/*   Updated: 2024/11/17 12:57:19 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_Hexa(int n)
{
	char	*Hex;
	int		count;

	Hex = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_Hexa(n / 16);
	}
	count += ft_putchar(Hex[n % 16]);
	return (count);
}