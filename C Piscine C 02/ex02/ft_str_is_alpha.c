/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 13:02:09 by atabiti           #+#    #+#             */
/*   Updated: 2021/07/07 12:24:34 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)

{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (!((str[index] >= 65 && str[index] <= 90)
				|| (str[index] >= 97 && str[index] <= 122)))
			return (0);
		index++;
	}
	return (1);
}
