#include <stdio.h>
void		ft_ft(int *nbr)
{

			*nbr = 42;

}


int main(void)
{
		
		int i;
		
		i = 2321;
		
		printf("before:%d\n",i);
		ft_ft(&i);
		printf("after:%d\n",i);

}
