#include "./ft_str_is_alpha.c"
#include <stdio.h>

int	main(void)
{
	char *alphas[] = { "Alpha", "alpha", "VERYALPHA", "" };
	char *not_alphas[] = { "not alpha", "n0tAlpha", "definetely\notalpha" };
	char *pointer;

	for (int i = 0; i < 4; i++)
		if (ft_str_is_alpha(alphas[i]))
			printf("Alpha %d\t\tOk: %s\n", i, alphas[i]);
		else
			printf("Alpha %d\t\tXXXX: %s\n", i, alphas[i]);

	for (int i = 0; i < 3; i++)
		if (!ft_str_is_alpha(not_alphas[i]))
			printf("Not alpha %d\tOk: %s\n", i, not_alphas[i]);
		else
			printf("Not alpha %d\tXXXX: %s\n", i, not_alphas[i]);

	printf("\n -- teste de mutação --\n");
	pointer = alphas[2];
	printf("%s\n", pointer);
	pointer = not_alphas[1];
	printf("%s\n", pointer);
}
