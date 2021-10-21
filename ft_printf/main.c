
#include "libftprintf.h"
#include "ft.h"

// itoa_hex ne gere pas les nbr negatifs

int main()
{
	char c = 'D';
	char *str = "michel";
	int nb = -50000;
	int	hex_nb = 0x2a;
	int	hexcap_nb = 0x2A;

	printf("coucou %s j'ai %d ans, je suis a %p prout %x %X\n", str, nb, &nb, hex_nb, hexcap_nb);
	ft_printf("coucou %s j'ai %d ans, je suis a %p prout %x %X\n", str, nb, &nb, hex_nb, hexcap_nb);
	return (0);		
}
