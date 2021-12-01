/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:42:20 by atabiti           #+#    #+#             */
/*   Updated: 2021/07/13 17:51:21 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long int	number;

	number = n;
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	 if (number >= 10)
	{	
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	if (number < 10)
	{
		ft_putchar(number + '0');
	}
}
