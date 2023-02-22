#include	<stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src[] = "salut";
	char	dest[50] = "hello    ";

	printf ("%s\n", ft_strcat(dest, src));
}
