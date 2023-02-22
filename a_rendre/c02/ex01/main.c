#include	<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	unsigned int	nbr;
	char	a[] = "salut dj dk";
	char	b[] = "df";
	
	nbr = 10;
	printf("%s\n", ft_strncpy(b, a, nbr));
}
