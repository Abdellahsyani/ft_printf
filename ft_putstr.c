/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaferyad <aaferyad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:04:49 by aaferyad          #+#    #+#             */
/*   Updated: 2024/11/18 11:04:54 by aaferyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (!str)
	{
		write(1, "(null)", 6);
		return (-1);
	}
	while (str[i])
	{
		ft_putchar(str[i]);
		count++;
		i++;
	}
	return (count);
}
