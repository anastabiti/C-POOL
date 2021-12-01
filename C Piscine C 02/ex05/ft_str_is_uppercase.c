/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 08:07:46 by atabiti           #+#    #+#             */
/*   Updated: 2021/07/07 14:07:19 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (!((str[index] >= 65) && (str[index] <= 90)))
			return (0);
		index++;
	}
	return (1);
}
