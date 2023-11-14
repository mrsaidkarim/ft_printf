/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:59:10 by skarim            #+#    #+#             */
/*   Updated: 2023/11/13 12:23:50 by skarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c, int size);
int	ft_putstr(char *s, int size);
int	ft_putdec(int nbr, int size);
int	ft_putuns(unsigned int n, int size);
int	ft_puthex(unsigned int nbr, int size);
int	ft_puthexup(unsigned int nbr, int size);
int	ft_putadress(void *adr, int size);

#endif