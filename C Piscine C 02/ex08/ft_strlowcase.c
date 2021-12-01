/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 09:27:05 by atabiti           #+#    #+#             */
/*   Updated: 2021/07/10 17:10:50 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (str[index] >= 65 && str[index] <= 90)
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}
