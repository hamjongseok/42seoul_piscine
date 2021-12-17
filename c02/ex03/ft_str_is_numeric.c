#include <stdio.h>

int		ft_str_is_number(char *str)
{
		int i;
		int re;
		
		i = 0;
		if(str[0] == '\0')
			return(1);

		while(str[i] != '\0')
		{
			if(str[i] >= '0' && str[i] <= '9')
			{
				re = 1;
			}
			else
				return(0);
			i++;
		}
	return(re);
}

int main(void)
{

	char a[10];
	printf("%d\n",ft_str_is_number(a));





	
	return(0);
}
