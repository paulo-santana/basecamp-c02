#include "../../ex00/ft_strcpy.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		i;
	char	*src = "A vida e loka";
	char	*src2 = "slk mano";
	char	dest[13];

	printf("%s\n", dest);
	printf("%s\n", dest);
	printf("strcpy()   : %s\n", strcpy(dest, src2));

	i = 0;
	while (i < 13)
	{
		printf("%c", dest[i]);
		i++;
	}

	printf("\n");
	printf("ft_strcpy(): %s\n", ft_strcpy(dest, src2));

	i = 0;
	while (i < 13)
	{
		printf("%c", dest[i]);
		i++;
	}
	printf("\n");
}
