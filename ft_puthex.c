/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:56:07 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/19 17:59:09 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, char arg, int *len)
{
	
	if (n < 16)
	{
		if (n <= 9)
			ft_putchar (n + 48, len);
		else if (n >= 10 && arg == 'x')
			ft_putchar ((n % 10) + 'a', len);
		else if (n >= 10 && arg == 'X')
			ft_putchar ((n % 10) + 'A', len);
	}
	else
	{
		ft_puthex ((n / 16), arg, len);
		ft_puthex ((n % 16), arg, len);
	}
}
