#include	<stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	a;
	int *b;

	a = 0;
	b = &a;

	ft_ft(b);
	printf("%d", a);
	return (0);
}
