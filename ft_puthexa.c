/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:39:43 by atahtouh          #+#    #+#             */
/*   Updated: 2023/12/02 18:46:55 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int nb, char ch)
{
	char	*base;
	int		c;

	c = 0;
	if (ch == 'x')
		base = "0123456789abcdef";
	else if (ch == 'X')
		base = "0123456789ABCDEF";
	if (nb < 16)
		c += ft_putchar(base[nb]);
	else if (nb >= 16)
	{
		c += ft_puthexa(nb / 16, ch);
		c += ft_putchar(base[nb % 16]);
	}
	return (c);
}
