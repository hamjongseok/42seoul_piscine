#include <unistd.h>
void	ft_putstr(char *str)
{
	
		while(*str)
		{
			write(1, str, 1);
			str++;
		}

}
int	ft_strcmp(char *s1, char *s2)
{	
	int i;


	i = 0;
	while(s1[i])
	{
		if(s1[i] != s2[i])
		{
			return(s1[i] - s2[i]);
		}	

		i++;
	}
	
	if(s2[i] == '\0')
		return(0);

	else
		return (-s2[i]);	
}

int main(int argc, char **argv)
{

	int i;
	int j;
	char *temp;


	i = 0;

	while(++i < argc)
	{	
			j = i;
			while(++j < argc)
			{
				if(ft_strcmp(argv[i],argv[j]) > 0)
				{
					temp = argv[i];
					argv[i] = argv[j];
					argv[j] = temp;

				}

			}
		
	}

	i = 1;
	while(i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);		
		
		i++;
	}
										
	return(0);
}
