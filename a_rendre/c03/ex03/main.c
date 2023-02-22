#include	<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	unsigned int	n;
	char	s1[] = "salut";
	char	s2[] = "";

	n = 3;
	printf ("%s\n", ft_strncat(s2, s1, n));
}
