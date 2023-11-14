/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:57:47 by skarim            #+#    #+#             */
/*   Updated: 2023/11/14 10:05:26 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_next(char *format, va_list args, int index, int size)
{
	if (format[index] == 'c')
		return (ft_putchar(va_arg(args, int), size));
	else if (format[index] == 's')
		return (ft_putstr(va_arg(args, char *), size));
	else if (format[index] == 'p')
		return (ft_putadress(va_arg(args, void *), size));
	else if (format[index] == 'd' || format[index] == 'i')
		return (ft_putdec(va_arg(args, int), size));
	else if (format[index] == 'u')
		return (ft_putuns(va_arg(args, unsigned int), size));
	else if (format[index] == 'x')
		return (ft_puthex(va_arg(args, unsigned int), size));
	else if (format[index] == 'X')
		return (ft_puthexup(va_arg(args, unsigned int), size));
	else if (format[index] == '%')
		return (ft_putchar('%', size));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		size;

	i = 0;
	size = 0;
	if (write(1, "", 0) == -1 || !format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			size = ft_next((char *)format, args, ++i, size);
		else
		{
			size++;
			write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (size);
}
