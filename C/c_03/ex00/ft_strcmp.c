int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[i2] != '\0')
		i2++;
	if (i == i2)
		return (0);
	if (i > i2)
		return (i - i2);
	else
		return (i - i2);
}
