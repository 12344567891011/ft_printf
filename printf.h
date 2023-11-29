/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:10:50 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/29 14:16:39 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);
void    ft_putstr(char *s);
void ft_putnbr(int n);
int ft_printf(const char *s, ...);

#endif