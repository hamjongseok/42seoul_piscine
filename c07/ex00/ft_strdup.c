#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int		ft_strlen(char *str)
{
		int i;

		i = 0;

		while(str[i])
			i++;

	return(i);
}



char	*ft_strdup(char *src)
{
	int len;
	char *dest;
	int i;
	i = 0;
	
	
	len = ft_strlen(src);

	dest = (char *)malloc(sizeof(char) * len + 1);
	
	if(dest == NULL)	
		return(0);


	while(src[i] != '\0')
	{
		dest[i] = src[i];

		i++;
	}
	
	dest[i] = '\0';

	return(dest);
}


int main(void)
{
	
	printf("%s\n",ft_strdup("hello!"));
	


	return(0);
}
