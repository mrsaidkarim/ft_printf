/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:49:52 by skarim            #+#    #+#             */
/*   Updated: 2023/11/14 11:50:21 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexadr(unsigned long long nbr, int size)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr < 16)
	{
		size = ft_putchar(hex[nbr], size);
	}
	else
	{
		size = ft_puthexadr(nbr / 16, size);
		size = ft_putchar(hex[nbr % 16], size);
	}
	return (size);
}

int	ft_putadress(void *adr, int size)
{
	if (adr == NULL)
		size = ft_putstr("0x0", size);
	else
	{
		size = ft_putstr("0x", size);
		size = ft_puthexadr((unsigned long long)adr, size);
	}
	return (size);
}
