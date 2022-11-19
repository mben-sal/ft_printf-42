/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:56:28 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/19 14:02:42 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putp ( unsigned long nbr , int *len )
{
    if ( nbr < 16)
    {
        if ( nbr <= 9)
            ft_putchar ( nbr + 48 , len );
        else if ( nbr >= 10 )
            ft_putchar ((nbr % 10 ) + 'a' , len );
    }
    else
    {
        ft_putp ( nbr / 16 , len );
        ft_putp ( nbr % 16 , len );
    }
}

void ft_pointer(int ptr , int *len )
{
    unsigned long a;
    a = (unsigned long) ptr;
    ft_putstr("0x", len);
    ft_putp(a , len);
}