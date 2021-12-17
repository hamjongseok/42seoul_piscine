int	ft_recursive_factorial(int nb)
{	
	int		i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb > i)
	{
		i = ft_recursive_factorial(nb - 1);
		i *= nb;
	}
	return (i);
}
