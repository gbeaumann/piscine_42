#include	<stdio.h>
#include	<stdlib.h>

int	ft_atoi(char *str);

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	argc = 0;
//	printf("%d\n", atoi(argv[1]));
	printf("%d", ft_atoi(argv[1]));
}
