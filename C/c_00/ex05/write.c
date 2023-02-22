#include	<unistd.h>

int	main(void)
{
	char	a;
	char	b;
	char	c;
	
	a = '1';
	b = '2';
	c = '3';
	while (a < '9')
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		a++;
	}
	return (0);
}
