#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int **ptr;

	ptr = malloc(sizeof(int *) * 1);
	*ptr = malloc(sizeof(int) * 1);
	**ptr = 4242;

	printf("&ptr =  %d\n", &ptr);
	printf("ptr =   %d\n", ptr);
	printf("*ptr  = %d\n", *ptr);
	printf("**ptr = %d\n", **ptr);
	return(0);
}
