#include	<stdio.h>
#include	<string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char ph[] = "salut";
	char ph2[] = "salut";
	printf ("%d\n", strcmp(ph, ph2));
	printf ("%d\n", ft_strcmp(ph, ph2));
}
