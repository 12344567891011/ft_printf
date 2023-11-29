/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:43:17 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/28 11:02:46 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

void ft_putnbr(int n)
{
	if (n == -2147483648)
	   write(1,"-2147483648",11);
	else if (n < 0)
	{
		n = -n;
		ft_putnbr(n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
        ft_putnbr(n % 10);
		
	}
	else if (n <= 9)
	{
		ft_putchar(n + 48);
	}
}

/*int main()
{
	ft_putnbr(-2147483648);
}*/