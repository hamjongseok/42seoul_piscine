#include <stdio.h>
int		ft_str_is_uppercase(char *str)
{
		int i;
		int res;
		i = 0;
		
		res = 1;
		while(str[i] != '\0')
		{
			if(!(str[i] >= 'A' && str[i] <= 'Z'))
				res = 0;

			i++;
		}
	return(res);
}

int main(void)
{
	char a[10];

	printf("%d\n",ft_str_is_uppercase(a));

	return(0);
}
