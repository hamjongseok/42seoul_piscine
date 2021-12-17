#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int integer)
{
	int		ten;
	int		one;

	ten = integer / 10;
	one = integer % 10;
	ft_putchar(ten + '0');
	ft_putchar(one + '0');
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;	

	i = 0;
	while (i < 99 )
	{	
		j = i + 1;
		while (j <= 99)
		{	
			if (i == 98)
			{
				ft_print(i);
				ft_putchar(' ');
				ft_print(j);
				  return ;
			}	
			ft_print(i);
			ft_putchar(' ');
			ft_print(j);
			ft_putchar(',');
			j++;
		}
		i++;
	}
}
