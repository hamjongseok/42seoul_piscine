#include <stdio.h>

void		ft_swap(int *a, int *b)
{			
			int c;

			c = *a;
			*a = *b; 
			*b = c;

}

int main(void)
{

	int a;
	a = 20;
	int b; 
	b = 30;
	
	printf("%d ,%d\n",a,b);
	ft_swap(&a,&b);
	printf("%d %d",a,b);






	return(0);
}
