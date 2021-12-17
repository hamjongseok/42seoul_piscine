#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
		int i = 0;
		int	temp;

		while(i < size)
		{
			temp = tab[i];
			tab[i] = tab[size - 1];
			tab[size - 1] = temp;
			i++;
			size--;
		}
}

int		main(void)
{
		int num1[15];
		num1[0] = 1;
		num1[1] = 2;
		num1[2] = 3;
		num1[3] = 4;
		num1[4] = 5;
		num1[5] = 6;
		num1[6] = 7;
		num1[7] = 8;
		num1[8] = 9;
		num1[9] = 10;
		num1[10] = 11;
		num1[11] = 12;
		num1[12] = 13;
	
		
		ft_rev_int_tab(num1,15);
		
		int i = 0;
		while(i < 13)
		{
	
				printf("%d",num1[i]);
			
				i++;
		}

	return(0);
}
