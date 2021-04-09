/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:51:19 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/07 20:39:21 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	last;

	i = 0;
	last = 0;
	while (src[i] != '\0')
	{
		if (i < size - 1)
		{
			last++;
			dest[i] = src[i];
		}
		i++;
	}
	dest[last] = '\0';
	return (i);
}
