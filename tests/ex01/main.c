#include "./ft_strncpy.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		i;
	char	*src = "A vida e loka";
	char	dest[14];

	strncpy(dest, src, 10);
	printf("printf():\t%s\nwhile:\t\t", dest);

	i = 0;
	while (i < 12)
		printf("%c", dest[i++]);

	printf("\n");
	ft_strncpy(dest, src, 10);
	printf("printf():\t%s\nwhile:\t\t", dest);
	i = 0;
	while (i < 12)
		printf("%c", dest[i++]);

	printf("\n");
}
