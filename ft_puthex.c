/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:56:07 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/19 14:03:34 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, char arg, int *len)
{
	long	nbr;

	nbr = n;
	if (nbr < 16 )
    {
        if (nbr <= 9)
            ft_putchar(nbr + 48, len);
        else if (nbr >= 10 && arg == 'x' )
            ft_putchar((nbr % 10 ) + 'a' , len );
        else if (nbr >= 10 && arg == 'X')
            ft_putchar((nbr % 10 ) + 'A' , len);
    }
    else
    {
        ft_puthex((nbr / 16), arg, len);
        ft_puthex((nbr % 16), arg, len);
    }
}
