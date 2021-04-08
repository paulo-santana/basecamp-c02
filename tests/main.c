#include "./ft_strcpy.c"
#include <stdio.h>

int	main(void)
{
	char *src = "A vida e loka";
	char dest[13];

	printf("%s\n", dest);
	ft_strcpy(dest, src);
	printf("%s\n", dest);
}
