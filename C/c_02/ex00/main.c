#include	<stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	a[] = "Salut";
	char	b[] = "Helloooo";
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", ft_strcpy(b, a));
}
