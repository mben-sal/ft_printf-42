/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:10:04 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/19 14:08:14 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>

#include <stdio.h>

int     ft_printf(const char *str, ...);
void	ft_putchar(char c, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putnbru(int n, int *len);
void	ft_putstr(char *s, int *len);
void	ft_puthex(unsigned int n, char arg, int *len);
void	ft_putp( unsigned long nbr , int *len );
void	ft_pointer(int ptr , int *len );

#endif