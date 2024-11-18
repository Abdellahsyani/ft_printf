/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyani <asyani@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:31:20 by asyani            #+#    #+#             */
/*   Updated: 2024/11/18 09:33:29 by asyani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/**
 * ft_percent - the function to handle the %
 * @n: the percent %
 *
 * return: how many % we write
 */

int	ft_percent(int n)
{
	int	count;

	count = 0;
	if (n)
		count += ft_putchar('%');
	return (count);
}
