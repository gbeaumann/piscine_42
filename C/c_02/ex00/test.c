#include	<unistd.h>

int	main(void)
{
	char	*dest;
	char	*src;
	int	i;

	src = "Salut, comment vas tu?";
	dest = src;
	i = 0;
	while (src[i] != '\0')
	{
		write (1, &dest[i], 1);
		i++;
	}
	return (0);
}
