/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:14:52 by mben-sal          #+#    #+#             */
/*   Updated: 2022/11/19 16:28:41 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_check_per(va_list pf, char c, int *len)
{
	if (c == 'c')
		ft_putchar (va_arg (pf, int), len);
	else if (c == 's')
		ft_putstr (va_arg (pf, char *), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr (va_arg (pf, int), len);
	else if (c == 'x' || c == 'X')
		ft_puthex (va_arg(pf, int), c, len);
	else if (c == 'u')
		ft_putnbru (va_arg(pf, int), len);
	else if (c == '%')
		ft_putchar ('%', len);
	else if (c == 'p')
		ft_pointer (va_arg(pf, unsigned long), len);
	else
		ft_putchar(c, len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	pf;
	int		len;

	i = 0;
	len = 0;
	va_start(pf, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_check_per(pf, str[i + 1], &len);
			i++;
		}
		else
			ft_putchar(str[i], &len);
		i++;
	}
	va_end(pf);
	return (len);
}

// int main()
// {	
// 	int i = 45;
// 	printf("%p\n", &i);
// 	ft_printf("%p\n", &i);
// 	return(0);
// }