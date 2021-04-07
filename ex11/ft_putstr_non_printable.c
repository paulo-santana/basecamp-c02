/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:39:41 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/07 20:41:53 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;
	char	*hexmap;
	char	hex1;
	char	hex0;

	hexmap = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 32 && c < 127)
			write(1, &c, 1);
		else
		{
			hex1 = hexmap[c % 16];
			hex0 = hexmap[c / 16];
			write(1, "\\", 1);
			write(1, &hex1, 1);
			write(1, &hex0, 1);
		}
		i++;
	}
}
