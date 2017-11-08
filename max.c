int		max(int* tab, unsigned int len)
{
	unsigned int	i;
	int				res;

	i = 1;
	if (len == 0)
		return (0);
	if (tab == 0)
		return (0);
	res = tab[0];
	while(i < len)
	{
		if (res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}


