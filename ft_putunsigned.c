/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:31:34 by atahtouh          #+#    #+#             */
/*   Updated: 2023/12/02 18:47:14 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int	c;

	c = 0;
	if (n > 9)
	{
		c += ft_putunsigned(n / 10);
		c += ft_putunsigned(n % 10);
	}
	else if (n <= 9)
	{
		c += ft_putchar(n + 48);
	}
	return (c);
}
