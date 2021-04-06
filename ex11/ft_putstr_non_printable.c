#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int i;
	char c;
	char *hexmap = "0123456789abcdef";
	char hex1;
	char hex0;

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
