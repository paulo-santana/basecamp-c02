/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:43:56 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/08 22:55:48 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*g_hexmap = "0123456789abcdef";

void	to_hex(char *dest, unsigned int size, unsigned long nb)
{
	unsigned int	i;
	unsigned int	half;
	char			tmp;

	i = 0;
	while (i < size)
	{
		dest[i] = g_hexmap[nb % 16];
		nb /= 16;
		i++;
	}
	i = 0;
	half = size / 2;
	while (i < half)
	{
		tmp = dest[i];
		dest[i] = dest[size - i - 1];
		dest[size - i - 1] = tmp;
		i++;
	}
}

void	print_hex_content(char *addr, int size)
{
	int		i;
	int		limit;
	char	c[2];

	i = 0;
	limit = 16;
	while (i < limit)
	{
		if (i < size)
		{
			to_hex(c, 2, addr[i]);
			write(1, c, 2);
		}
		else
		{
			write(1, "  ", 2);
		}
		if (i % 2 != 0)
			write(1, " ", 1);
		i++;
	}
}

void	print_text_content(char *addr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (addr[i] > 31 && addr[i] < 127)
			write(1, &addr[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	void			*addr_location;
	char			address_text[16];
	unsigned long	limit;
	int				max_length;

	addr_location = addr;
	limit = (unsigned long)addr_location + size;
	while ((unsigned long)addr_location < limit)
	{
		max_length = (limit - (unsigned long)addr_location) > 16 ? 16
			: limit - (unsigned long)addr_location;
		to_hex(address_text, 16, (long)addr_location);
		write(1, address_text, 16);
		write(1, ": ", 2);
		print_hex_content((char *)addr_location, max_length);
		print_text_content((char *)addr_location, max_length);
		write(1, "\n", 1);
		addr_location += 16;
	}
	return (addr);
}
