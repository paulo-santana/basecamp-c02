#include <bsd/string.h>
#include <stdio.h>

int     main(void)
{
	char    src[] = "teste teste kk";
	char    dest[5];
	int             i;

	strlcpy(dest, src, 5);

	printf("src  pointer: %p\n", src);
	printf("dest pointer: %p\n", dest);

	i = 0;
	while (i < 23)
	{
		printf("%d - %c - %p\n", dest[i], dest[i], &dest[i]);
		i++;
	}

	printf("%s\n", dest);
}
