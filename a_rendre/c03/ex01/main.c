#include	<stdio.h>
#include	<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	int nb;
	char ph[] = "salut";
	char ph2[] = "salUt";

	nb = 3;
	printf ("%d\n", strncmp(ph, ph2, nb));
	printf ("%d\n", ft_strncmp(ph, ph2, nb));
}
