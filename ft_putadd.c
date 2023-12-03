/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:36:53 by atahtouh          #+#    #+#             */
/*   Updated: 2023/12/02 21:47:51 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadd(unsigned long long nb, char ch)
{
	char	*base;
	int		c;

	c = 0;
	if (ch == 'x')
		base = "0123456789abcdef";
	if (nb < 16)
		c += ft_putchar(base[nb]);
	else if (nb >= 16)
	{
		c += ft_putadd(nb / 16, ch);
		c += ft_putchar(base[nb % 16]);
	}
	return (c);
}
