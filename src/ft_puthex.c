/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:35:22 by skarim            #+#    #+#             */
/*   Updated: 2023/11/12 20:16:11 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nbr, int size)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr < 16)
	{
		size = ft_putchar(hex[nbr], size);
	}
	else
	{
		size = ft_puthex(nbr / 16, size);
		size = ft_putchar(hex[nbr % 16], size);
	}
	return (size);
}
