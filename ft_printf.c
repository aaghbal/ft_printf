/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:10:42 by aaghbal           #+#    #+#             */
/*   Updated: 2022/11/17 15:02:28 by aaghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_check(const char *ptr, va_list arg)
{
	int	i;

	i = 0;
	if (*ptr == 'c')
		i = ft_putchar(va_arg(arg, int));
	else if (*ptr == 's')
		i = ft_putstr(va_arg(arg, char *));
	else if (*ptr == 'd' || *ptr == 'i')
		i = ft_putnbr(va_arg(arg, int));
	else if (*ptr == 'u')
		i = ft_putnbr_u(va_arg(arg, unsigned int));
	else if (*ptr == 'x')
		i = fct(va_arg(arg, unsigned int));
	else if (*ptr == 'X')
		i = fct2(va_arg(arg, unsigned int));
	else if (*ptr == 'p')
	{
		write(1, "0x", 2);
		i = fct(va_arg(arg, size_t)) + 2;
	}
	else if (*ptr == '%')
		i = write(1, "%", 1);
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			i++;
			len += ft_check(&s[i], args);
		}
		else if (s[i] == '%')
			break ;
		else
			len += write(1, &s[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
