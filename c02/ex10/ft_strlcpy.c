#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
		
		int i;
		unsigned int count;
		i = 0;

		while(src[i] != '\0' &&  i < size - 1)
		{
			dest[i] = src[i];		
			i++;
		}
		
		dest[i] = '\0';

	return(i);
}

int main(void)
{
	char a[10];
	char b[10] = "sdad";
	
	printf("%d\n",ft_strlcpy(a,b,8));



	return(0);
}
