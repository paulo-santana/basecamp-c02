#include "./ft_strcapitalize.c"
#include "../ex00/ft_strcpy.c"
#include <stdio.h>

int	main(void)
{
	char str[50];
	ft_strcpy(str, "irineu, vc nao 5abe n3m-eu 42kkjkj");
	printf("String: \"%s\"\n", str);

	char *result = ft_strcapitalize(str);
	printf("str: %s\n", str);
	printf("result: %s\n", result);

	printf("\n");
	ft_strcpy(str, "oi, tudo BEM? 42palAVRAs quaREnta-e-dUas; ciNQuentA+e+um");
	printf("String: \"%s\"\n", str);
	result = ft_strcapitalize(str);
	printf("str: %s\n", str);
	printf("result: %s\n", result);
}
