#include "./ft_str_is_numeric.c"
#include <stdio.h>

int	main(void)
{
	char *numeric = "0123456789";
	char *not_numeric = "012 345a6789";
	int is_numeric_numeric = ft_str_is_numeric(numeric);
	int is_not_numeric_numeric = ft_str_is_numeric(not_numeric);

	if (is_numeric_numeric && !is_not_numeric_numeric)
		printf("Ok :D\n");
	else
	{
		printf("Not ok :(\n");
		printf("numeric: %d \n", is_numeric_numeric);
		printf("not_numeric: %d \n", is_not_numeric_numeric);
	}
}
