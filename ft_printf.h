/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:12:55 by aaghbal           #+#    #+#             */
/*   Updated: 2022/11/18 16:15:17 by aaghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int n);
int	fct(size_t n);
int	fct2(size_t n);

#endif
