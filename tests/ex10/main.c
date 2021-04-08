#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	src[] = "zzzzzzzzzzzzzzzzz";
	char	dest[10] = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', '\0'};
	int		i;

	unsigned int size = strlcpy(dest, src, 7);

	printf("dest size: %d\n", size);

	i = 0;
	while (i < 10)
	{
		printf("%c\n", dest[i]);
		i++;
	}

	printf("src1: %s\n", src);
	printf("dest1: %s\n", dest);
}
