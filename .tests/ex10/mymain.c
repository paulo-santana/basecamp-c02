#include "ft_strlcpy.c"
#include <stdio.h>

int     main(void)
{
	char	src2[] = "zzzzzzzzzzzzzzzzz";
	char	dest2[10] = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', '\0'};
	int		i;
	
	unsigned int size2 = ft_strlcpy(dest2, src2, 7);
	
	printf("dest2 size: %d\n", size2);
	
	i = 0;
	while (i < 10)
	{
		printf("%c\n", dest2[i]);
		i++;
	}
	
	printf("src2: %s\n", src2);
	printf("dest2: %s\n", dest2);
}
