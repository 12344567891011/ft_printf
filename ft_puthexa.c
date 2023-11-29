/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:39:43 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/29 14:17:16 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*void ft_puthexa(int c , char ch)
{	
    if (c > 16)
	{
		ft_puthexa(c / 16);
        ft_puthexa(c % 16);
		
	}
	else if (c <= 16)
	{
		ft_putchar(c + 48);
	}
}*/
int main()
{
	printf("%x", 123);
}