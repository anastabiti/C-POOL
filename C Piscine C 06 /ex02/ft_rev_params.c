/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 09:57:37 by atabiti           #+#    #+#             */
/*   Updated: 2021/07/15 10:07:53 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	main(int argc, char **argv)

{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[argc - 1]);
		i++;
		argv--;
		ft_putchar('\n');
	}
	return (0);
}
