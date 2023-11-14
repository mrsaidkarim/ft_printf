/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:47:07 by skarim            #+#    #+#             */
/*   Updated: 2023/11/12 20:16:51 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, int size)
{
	int	i;

	if (s == NULL)
		return (ft_putstr("(null)", size));
	i = 0;
	while (s[i])
	{
		size = ft_putchar(s[i], size);
		i++;
	}
	return (size);
}
