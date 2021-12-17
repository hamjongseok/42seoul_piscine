#include <stdlib.h>
#include <stdio.h>
int		*ft_range(int min, int max)
{
		int *arr;
		int i;
		
		if (min >= max)
		return (NULL);
			
		arr = (int *)malloc(sizeof(int) * (max - min));

		i = 0;

		while(min < max)
		{

			arr[i] = min;

			min++;
			i++;
		}

	return(arr);
}

int main(void)
{

	int a = 3;
	int b = 15;
	int i;
	int *res;
	i = 0;
	
	res = ft_range(a,b);
	while(i < 10)
	{

		printf("%d\n",res[i]);

		i++;
	}

	return(0);
}
