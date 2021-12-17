#include <stdio.h>
char	*ft_lowcase(char *str)
{
		int i;
		i = 0;
		
		while(str[i] != '\0')
		{
			if(str[i] >= 'A' &&  str[i] <= 'Z')
				str[i] += 32;

			i++;
		}
	return(str);
}

char	*ft_strcapitalize(char *str)
{
		int i;
		int f;
		i = 0;
		f = 1;
		int lowcase;

		ft_lowcase(str);
		while(str[i] != '\0')
		{
			lowcase = str[i] >= 'a' &&  str[i] <= 'z';
			
			if(f && lowcase)
			{
				str[i] -= 32;
				f = 0;
			}
			
			else if(lowcase || str[i] >= '0' && str[i] <= '9' )
				f = 0;	
			else
				f = 1;
			i++;
		}
		
	return(str);
}

int	main(void)
{

	char a[60] =  "dsad dasd !!das!dsa!dasdsad!  ml dmldml";
	
	ft_strcapitalize(a);

	printf("%s\n",a);



	return(0);
}
