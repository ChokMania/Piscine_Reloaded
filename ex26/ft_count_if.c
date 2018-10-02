int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (tab[++i] != 0)
	{
		if (f(tab[i]) == 1)
			j++;
	}
	return (j);
}
