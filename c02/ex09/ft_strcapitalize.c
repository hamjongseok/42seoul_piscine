#include <stdio.h>
char	*ft_strlowcase(char *str)
{
		int i;
		i = 0;
		while(str[i] != '\0')
		{
			if(str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
			i++;
		}

	return(str);
}

char	*ft_strcapitalize(char *str)
{
		int i;
		int f;
		f = 1;
		i = 0;

		ft_strlowcase(str);

		while(str[i] != '\0')
		{	
			if(f && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				f = 0;
			}
			else if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= '0' && str[i] <= '9')
				f = 0;

			else
				f = 1;
			i++;
		}
	
		return(str);
}

int main(void)
{
	char a[100] = "dasdasd....dsa.dsa.ds.dsa.sd.ad.sdsd ds d    dd  d d  d d d d d "; 
	
	ft_strcapitalize(a);

	printf("%s\n",a);



	return(0);
}
