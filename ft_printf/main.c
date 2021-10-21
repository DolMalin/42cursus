
#include "libftprintf.h"
#include "ft.h"

int main()
{
	char c = 'D';
	char *str = "michel";
	int nb = -50000;

	printf("coucou %s j'ai %d ans, je suis a %p\n", str, nb, &nb);
	ft_printf("coucou %s j'ai %d ans, je suis a %p\n", str, nb, &nb);
	return (0);		
}