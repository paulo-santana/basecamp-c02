#include "./ft_str_is_lowercase.c"
#include <stdio.h>

int	main(void)
{
	char *empty = "";
	char *lower = "abcdefghijklmnopqrstuvwxyz";
	char *upper = "abcdefghijklmnopqrStuvwxyz";
	char *numeric = "abcdefghijklmnopqrstuvwxyz9";

	int is_empty_lower = ft_str_is_lowercase(empty);
	int is_lower_lower = ft_str_is_lowercase(lower);
	int is_upper_lower = ft_str_is_lowercase(upper);
	int is_numeric_lower = ft_str_is_lowercase(numeric);

	if (is_lower_lower && !is_upper_lower && !is_numeric_lower)
		printf("Ok :D\n");
	else
	{
		printf("Not ok :(\n");
		printf("empty: %d \n", is_empty_lower);
		printf("lower: %d \n", is_lower_lower);
		printf("upper: %d \n", is_upper_lower);
		printf("numeric: %d \n", is_numeric_lower);
	}
}
