#include	<stdio.h>

int	main(void)
{
	int *nbr;
	int	a;

	a = 42;
	nbr = &a;
	printf ("%d", *nbr);
	return (0);
}
