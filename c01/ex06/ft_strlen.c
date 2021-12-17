#include <stdio.h>
int		ft_strlen(char *str)
{
			int i;
			i = 0;

			while(str[i] != '\0')
			{				
				i++;
			}
			return(i);
}

int			main(void)
{
	char a[16];
	a[0] = '1';
	a[1] = '2';
	a[2] = '3';

	printf("%d\n",ft_strlen(a)); 
	return(0);
}
