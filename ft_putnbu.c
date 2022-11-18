/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:38:44 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/18 17:45:16 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbru(int n, int *len)
{
	unsigned int 	nbr;

	nbr = n;
	if (nbr <= 9)
	{
		ft_putchar(nbr + 48, len);
	}
	else
	{
		ft_putnbr(nbr / 10, len);
		ft_putnbr(nbr % 10,	len);
	}
}