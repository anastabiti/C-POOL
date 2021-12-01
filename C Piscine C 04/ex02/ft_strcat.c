/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 08:12:08 by atabiti           #+#    #+#             */
/*   Updated: 2021/07/12 16:48:45 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	sI;
	int	dI;

	sI = 0;
	dI = 0;
	while (dest[dI] != 0)
	{
		dI++;
	}
	while (src[sI] != 0)
	{
		dest[dI] = src[sI];
		dI++;
		sI++;
	}
	dest[dI] = 0;
	return (dest);
}