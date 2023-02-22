int	ft_atoi(char *str)
{
	int	r;
	int	i;
	int	signe;

	i = 0;
	r = 0;
	signe = 1;
	while (str[i] && (((str[i] >= 9 && str[i] <= 13) || str[i] == 32)))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = (signe) * (-1);
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * signe);
}
