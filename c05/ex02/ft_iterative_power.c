int	ft_iterative_power(int nb, int power)
{		
	int		i;
	int		j;

	j = 1;
	i = 0;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		j *= nb;
		i++;
	}
	return (j);
}
