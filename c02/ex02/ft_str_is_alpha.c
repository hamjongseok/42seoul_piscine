#include <stdio.h>
int		ft_str_alpha(char *str)
{
		int i;
		i = 0;
		int result;

		if(str[0] == '\0')
			return(1);	
		

		while(str[i] != '\0')
		{
		
			if(str[i] >= 65 && str[i] <= 122)	
				result = 1;
							
			else 
				return(0);

			i++;
		}
		return(result);
}

int		main(void)
{
		
		char a[10] = "a";

		printf("%d\n",ft_str_alpha(a));
	
		return(0);
}
