/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:10:01 by skarim            #+#    #+#             */
/*   Updated: 2023/11/12 20:16:27 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexup(unsigned int nbr, int size)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (nbr < 16)
	{
		size = ft_putchar(hex[nbr], size);
	}
	else
	{
		size = ft_puthexup(nbr / 16, size);
		size = ft_putchar(hex[nbr % 16], size);
	}
	return (size);
}
