#include <stdio.h>

int		ft_sqrt(int nb)
{
	int x;

	if (nb < 0)
		return (0);
	x = 1;
	while (x <= nb / x + 1)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
