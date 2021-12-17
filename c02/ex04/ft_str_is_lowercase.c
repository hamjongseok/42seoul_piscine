#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
		int i = 0;
		int re;

		if(*str == '\0')
			return(1);

		while(str[i] != '\0')
		{
			if(str[i] >= 'a' && str[i] <= 'z')
				re = 1;
			
			else
				return(0);

			i++;
		}

	return(re);
}

int main(void)
{

	char a[10];

	printf("%d\n",ft_str_is_lowercase(a));


	return(0);
}
