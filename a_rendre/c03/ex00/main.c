#include	<stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	ph[] = "sAlut";
	char	ph2[] = "salut";

	printf ("%d\n", ft_strcmp(ph , ph2));
}
