/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:20:17 by skarim            #+#    #+#             */
/*   Updated: 2023/11/12 20:16:56 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int n, int size)
{
	if (n < 10)
	{
		return (ft_putchar(n + '0', size));
	}
	else
	{
		size = ft_putuns(n / 10, size);
		size = ft_putchar(n % 10 + '0', size);
	}
	return (size);
}
