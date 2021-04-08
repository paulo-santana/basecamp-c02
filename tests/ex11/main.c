#include "./ft_putstr_non_printable.c"
#include <stdio.h>

int	main(void)
{
	char *text = "Oi\nvoce esta bem?";

	ft_putstr_non_printable(text);
}
