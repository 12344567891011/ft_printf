/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:55:22 by atahtouh          #+#    #+#             */
/*   Updated: 2023/12/03 12:42:28 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	chec_format(va_list pt, int c)
{
	int	cont;

	cont = 0;
	if (c == '%')
		cont += ft_putchar(c);
	else if (c == 'c')
		cont += ft_putchar(va_arg(pt, int));
	else if (c == 's')
		cont += ft_putstr(va_arg(pt, char *));
	else if (c == 'i' || c == 'd')
		cont += ft_putnbr(va_arg(pt, int));
	else if (c == 'X' || c == 'x')
		cont += ft_puthexa(va_arg(pt, unsigned int), c);
	else if (c == 'p')
	{
		cont += ft_putstr ("0x");
		cont += ft_putadd((va_arg(pt, unsigned long long)), 'x');
	}
	else if (c == 'u')
		cont += ft_putunsigned(va_arg(pt, unsigned int));
	return (cont);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		result;
	va_list	ptr;

	i = 0;
	result = 0;
	va_start(ptr, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			result += chec_format(ptr, s[i]);
		}
		else
		{
			ft_putchar (s[i]);
			result++;
		}
		i++;
	}
	va_end (ptr);
	return (result);
}

int main ()
{
	int i;

	
	i = ft_printf("hello %");
	printf("%d",i);
}