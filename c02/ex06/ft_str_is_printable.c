#include <stdio.h>
int		ft_str_is_printable(char *str)
{
		int i;
		int res;
		i = 0;
		
		res = 1;
		while(str[i] != '\0')
		{
			if(str[i] >= 32 && str[i] <= 126)
				res = 1;
			else
				return(0);
			i++;
		}
	return(res);
}


int main(void)
{

	char a[3];

	printf("%d",ft_str_is_printable(a));



	return(0);
}
