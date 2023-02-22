int	ft_atoi(char *str)
{
	int	r;
	int	i;
	int	signe;
	int	moins;

	i = 0;
	r = 0;
	moins = 0;
	while (str[i] && (((str[i] >= 9 && str[i] <= 13)
				|| str[i] == 32) || (str[i] == 45 || str[i] == 43)))
	{
		if (str[i] == '-')
			moins++;
		i++;
	}
	if (moins == 0 || moins % 2 == 0)
		signe = 1;
	else
		signe = -1;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * signe);
}
