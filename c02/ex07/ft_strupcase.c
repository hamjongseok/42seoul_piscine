#include <stdio.h>
char	*ft_strupcase(char *str)
{

		int i;
		i = 0;

		while(str[i] != '\0')
		{
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			
			i++;
		}
	return(str);
}

int	main(void)
{
	char a[10] = "dasda";
	
	ft_strupcase(a);
	printf("%s\n",a);

	return(0);
}
