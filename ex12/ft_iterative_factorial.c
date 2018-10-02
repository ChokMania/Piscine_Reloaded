int	ft_iterative_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb == 0)
		return (1);
	if (nb <= 12 && nb >= 1)
	{
		while (i > 1)
			nb = nb * i--;
		return (nb);
	}
	return (0);
}
