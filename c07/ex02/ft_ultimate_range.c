#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{		
		int *temp;
		    
		
		if(min >= max)
		{
			temp = NULL;
			return(0);

		}
		temp = malloc(sizeof(int) * (max - min));

		if (temp == NULL)
		return (-1);

		int i;
		i = 0;

		while(min < max)
		{

			temp[i] = min;
			i++;
			min++;
			
		}
		*range = temp;  //역참조 
		printf("2 &(*a) = %d\n", range);
		printf("2 *a    = %d\n", *range);
	
	return(i);
	
}

int		main(void)
{
		int *a;
		a = NULL;

		printf("1 &(*a) = %d\n", &a);
		printf("1 *a =    %d\n", a);
		printf("%d\n",ft_ultimate_range(&a,0,10));
		printf("3 &(*a) = %d\n", &a);
		printf("3 *a =    %d\n", a);


return (0);
}
