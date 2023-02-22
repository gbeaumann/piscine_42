#include	<stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	swap;
	int	swap2;

	swap = 42;
	swap2 = 24;

	ft_swap(&swap, &swap2 );
	printf ("%d\n%d\n", swap, swap2);
	return (0);
}
