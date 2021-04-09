#include "./ft_print_memory.c"
#include <stdio.h>

int	main(void)
{
	//char src[] = "se voce nao manja, nao venha desmanjar os manjadores.\nTa em shock?? KKKKKKKK Atak dos palhaco loco eahuaehauehe huehuebrbrbr?!?! mais alguns caracteres invisiveis toma: \n opa so sei esses;s";

	char src2[] = "Bonjour les aminches	\n	c  est fou	tout	ce qu on peut faire avec	\n	print_memory\n\n\n	lol.lol\n ";
	//ft_print_memory(src, 90);

	//char *str = "Bonjour les aminches\n\b\rc  est fou\ntout\rce qu on peut faire avec\r\r\nprint_memory\n\n\r\blol\rlol\r \b";
	ft_print_memory(src2, sizeof(src2));
	char first[] = { 165 };
	char second[] = { 0x9f, 0x2a };
	char third[] = { 0x88, 0xbd, 0xdc };
	char fourth[] = { 0xec, 0xce, 0x3f, 0xae };
	ft_print_memory(first, 1);
	ft_print_memory(second, 2);
	ft_print_memory(third, 3);
	ft_print_memory(fourth, 4);
}
