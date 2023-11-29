/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:55:22 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/28 12:58:38 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void chec_format(va_list p, int c, int *len)
{
	if (c == '%')
		ft_putchar(c);
	else if (c == 'c')
      ft_putchar(va_arg(p,int));
	else if (c == 's')
		ft_putstr(va_arg(p,char *));
	else if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(p, int));
	else if (c == 'X' || c == 'x')
		ft_puthexa(va_arg(p, int), c);
}

int ft_printf(const char *s, ...)
{
	int i;
	int result;

	i = 0;
	
	va_list ptr;
	result = 0;
	va_start(ptr,s);
	
	while (s[i])
	{
		if(s[i] == '%')
		{
			i++;
			chec_format(ptr, s[i],&result);
		}
		else
		{
			ft_putchar(s[i]);
			result++;
		}
		va_end(ptr);
		i++;
	}
	return(result);
}
int main ()
{
	ft_printf("nombre %x de %s est %c",12345,"asmae",'a');
}