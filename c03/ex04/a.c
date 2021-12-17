#include <stdio.h>
#include <string.h>
char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	if (to_find[0] == '\0') //비어있으면 str반환 
		return (str);
	i = 0;
	while (str[i]) 
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (!to_find[j])
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

int main(void)
{


	printf("%s\n",strstr("hello42 world", "e"));
	printf("%s\n",ft_strstr("hello42 world", "e"));



	return(0);
}
