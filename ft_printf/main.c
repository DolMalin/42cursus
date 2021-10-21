
#include "libftprintf.h"
#include "ft.h"

int main()
{
	char c = 'D';
	char *str = "michel";
	int nb = -50000;
	int	hex_nb = 0x2a;

	printf("coucou %s j'ai %d ans, je suis a %p prout %x\n", str, nb, &nb, hex_nb);
	ft_printf("coucou %s j'ai %d ans, je suis a %p prout %x\n", str, nb, &nb, hex_nb);
	return (0);		
}
