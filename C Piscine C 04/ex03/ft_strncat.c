/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 09:28:15 by atabiti           #+#    #+#             */
/*   Updated: 2021/07/12 10:10:14 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	sI;
	unsigned int	dI;

	sI = 0;
	dI = 0;
	while (dest[dI] != 0)
	{
		dI++;
	}
	while (src[sI] != 0 && sI < nb)
	{
		dest[dI] = src[sI];
		dI++;
		sI++;
	}
	dest[dI] = 0;
	return (dest);
}
