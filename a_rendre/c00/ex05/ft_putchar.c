#include	<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_help(char *e)
{
	write (1, &e, 3);
}
