#include <stdio.h>
void		ft_ultimate_ft(int *********nbr)
{
			*********nbr = 42;
}

int main(void)
{

	int i = 24;
	
	ft_ultimate_ft(&i);
	
	printf("%d\n",i);
	return(0);
}
