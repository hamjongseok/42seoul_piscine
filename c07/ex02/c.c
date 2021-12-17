#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *temp;
	int i;

	if(min >= max)
	{
		temp = NULL;
		return(0);
	}

	temp = (int *)malloc(sizeof(int) * (max - min));

	i = 0;

	while(min < max)
	{
	
		temp[i] = min;
		
		min++;
		i++;

	}

	*range = temp;


	return(i);
}

int main(void)
{
	int *a;

	a = NULL;

	printf("%d\n",ft_ultimate_range(&a,0,10));


	return(0);
}
