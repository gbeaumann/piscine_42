#include	<stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	print[] = "S'\n'";

	printf ("%d\n", ft_str_is_printable(print));
}
