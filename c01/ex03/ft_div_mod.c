#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
		
		*div = a / b;
		*mod = a % b;

}

int main(void)
{

	int a;
	int b;
	a = 20;
	b = 10;
	
	ft_div_mod(a,b,&a,&b);
	printf("%d %d\n",a,b);



	return(0);
}
