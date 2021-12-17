#include <stdio.h>

char	*ft_strcpy(char *dest,char *src)
{		

		int i = 0;
		while(src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		
		dest[i] = '\0';
		return(dest);
}


int	main(void)
{
	char a[10] = "hello!";
	char b[10];

	ft_strcpy(b,a);
	printf("%s",b);
	return(0);
}
