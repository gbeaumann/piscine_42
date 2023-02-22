#include	<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	t;
	int tt;

	t = 8;
	tt = 6;
	ft_ultimate_div_mod(&t, &tt);
	printf ("%d\n%d\n", t, tt);
}
