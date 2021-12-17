#include <stdio.h>


void	ft_sort_int_tab(int *tab, int size)
{
		int temp;
		int i = 0;
		int j;
		while(i < size)
		{	
			j = 0;
			while(j < size)
			{
				if(tab[j + 1] > tab[j])
				{	
					temp = tab[j + 1];
					tab[j + 1] = tab[j];
					tab[j] = temp;
				}
				j++;
			}
			i++;
		}
}


int	main(void)
{

	int i[8];

	i[0] = 5;
	i[1] = 44;
	i[2] = 33;
	i[3] = 22;
	i[4] = 231;
	 i[5] = 341;
	  i[6] = 21;
	   i[7] = 31;


	ft_sort_int_tab(i,8);
	
	int j = 0;
	while(j < 8)
	{
		printf("%d ",i[j]);
		j++;
	}

	return(0);
}
