#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main (void)
{
	int t;
	int	tt;
	int div;
	int mod;

	t = -6;
	tt = 10;
	ft_div_mod(t, tt, &div, &mod);
	printf ("%d\n%d\n",div,mod);
	return (0);
}
