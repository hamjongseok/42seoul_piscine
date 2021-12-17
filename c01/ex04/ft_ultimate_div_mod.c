#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{		
		
		int c;

		c = *a;
		*a = c / *b;
		*b = c % *b;
		
}

int main(void)
{
	
	int a;
	int b;

	a = 20;
	b = 7;
	
	printf("%d %d\n",a,b);
	ft_ultimate_div_mod(&a,&b);
	printf("%d %d\n",a,b);


	return(0);
}
