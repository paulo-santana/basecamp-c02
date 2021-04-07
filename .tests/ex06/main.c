#include "./ft_str_is_printable.c"
#include <stdio.h>

int	main(void)
{
	int		pcounter;
	int		npcounter;
	int		i;
	char	printables[128 - 32];
	char	non_printables[33];

	pcounter = 0;
	npcounter = 0;
	for (i = 1; i < 128; i++)
	{
		if (i < 32 || i == 127) {
			non_printables[npcounter] = i;
			npcounter++;
		} else {
			printables[pcounter] = i;
			pcounter++;
		}
	}
	printables[pcounter] = '\0';
	non_printables[npcounter] = '\0';

	if (!ft_str_is_printable(non_printables) && ft_str_is_printable(printables))
	{
		printf("OK :D\n");
	} else {
		printf("Not ok :/\n");
	}
}
