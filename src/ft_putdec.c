/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:47:34 by skarim            #+#    #+#             */
/*   Updated: 2023/11/14 14:51:42 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdec(int nbr, int size)
{
	long	n;

	n = nbr;
	if (n == 0)
		return (ft_putchar('0', size));
	if (n < 0)
	{
		n = -n;
		ft_putchar('-', size);
		size++;
	}
	if (n >= 0 && n < 10)
	{
		return (ft_putchar(n + '0', size));
	}
	if (n >= 10)
	{
		size = ft_putdec(n / 10, size);
		size = ft_putchar(n % 10 + '0', size);
	}
	return (size);
}
