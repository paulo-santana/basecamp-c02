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
		i++; }
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
	char			address_text[15];
	unsigned long	hex_chars;
	unsigned long	limit;
	int				max_length;

	limit = (unsigned long)addr + size;
	while((unsigned long)addr < limit)
	{
		max_length = (limit - (unsigned long)addr) > 16 ? 16 : limit - (unsigned long)addr;
		to_hex(address_text, 15, (long)addr);
		write(1, address_text, 15);
		write(1, ": ", 2);
		print_hex_content((char *)addr, max_length);
		print_text_content((char *)addr, max_length);
		write(1, "\n", 1);
		addr += 16;
	}
}
