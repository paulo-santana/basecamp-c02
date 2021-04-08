#include "./ft_str_is_uppercase.c"
#include <stdio.h>

int	main(void)
{
	char *empty = "";
	char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *lower = "ABCDEFGHIJKLMNOPQRsTUVWXYZ";
	char *numeric = "ABCDEFGHIJKLMNOPQRSTUVWXYZ9";

	int is_empty_upper = 	ft_str_is_uppercase(empty);
	int is_lower_upper = 	ft_str_is_uppercase(lower);
	int is_upper_upper = 	ft_str_is_uppercase(upper);
	int is_numeric_upper = 	ft_str_is_uppercase(numeric);

	if (is_empty_upper && !is_lower_upper && is_upper_upper && !is_numeric_upper)
		printf("Ok :D\n");
	else
	{
		printf("Not ok :(\n");
		printf("empty: %d \n", is_empty_upper);
		printf("lower: %d \n", is_lower_upper);
		printf("upper: %d \n", is_upper_upper);
		printf("numeric: %d \n", is_numeric_upper);
	}
}
