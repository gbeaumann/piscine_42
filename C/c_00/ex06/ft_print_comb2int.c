void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	g;
	int	f;
	char	b;
	char	bb;

	a = '0';
	aa = '0';
	b = '0';
	bb = '0';
	while (a++ <= '9')
	{	
		while (aa++ <= '9')
		{
			while (b++ <= '9')
			{
				while (bb++ <= '9')
				{
					if (a + aa < b + bb)
					{	
						ft_putchar(a -1);
						ft_putchar(aa -1);
						ft_putchar (' ');
						ft_putchar(b -1);
						ft_putchar(bb -1);
						ft_putchar(',');
						ft_putchar(' ');
					}
				}
				bb = '0';
			}
			b = '0';
		}
		aa = '0';
	}
	a = '0';
}
