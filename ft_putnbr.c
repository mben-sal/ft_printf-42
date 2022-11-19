/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:46:42 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/19 14:05:43 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar('-', len);
		nbr = nbr * -1;
	}
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