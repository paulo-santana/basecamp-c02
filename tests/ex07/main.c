#include "./ft_strupcase.c"
#include <stdio.h>

int	main(void)
{
	int i;
	char str1[] = {'H', 'i', '!', '\0'};
	char str2[27];
	char str3[128 - 32];

	for (i = 0; i < 26; i++)
		str2[i] = i + 'a';
	str2[i] = '\0';

	i = 0;
	for (char c = 32; c < 126; c++)
	{
		str3[i] = c;
		i++;
	}
	str3[i] = '\0';

	printf("Before:\n");
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("\n");

	char *after = ft_strupcase(str1);
	ft_strupcase(str2);
	char *last = ft_strupcase(str3);

	printf("After:\n");
	printf("%s\n", after);
	printf("%s\n", str2);
	printf("%s\n", last);
	printf("\n");
}
