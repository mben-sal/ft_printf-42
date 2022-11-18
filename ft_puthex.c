/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:56:07 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/18 19:02:48 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, char arg, int *len)
{
	long	nbr;

	if (nbr <= 15)
	{
		if(nbr <= 9 )
			ft_putchar(nbr + 48, len);
		else if (nbr >= 10 && arg == 'X' )
			ft_putchar((nbr % 10) + 55 , len);
		else if (nbr >= nbr && arg == 'x')
			ft_putchar(nbr + 87 ,len );
	}
	else
	{
		ft_puthex(nbr / 16, len);
		ft_puthex(nbr % 16,	len);
	}
}