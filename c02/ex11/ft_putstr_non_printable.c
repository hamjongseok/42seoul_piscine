#include <unistd.h>
void	ft_putchar(char *c)
{
	write(1, &c, 1);	

}

void	ft_hexa(char c)
{
			str[i] / 16
	

}

void	ft_putstr_non_printable(char *str)
{
		int i;
		i = 0;

		while(str[i] != '\0')
		{
			if(!(str[i] >= 32 && str[i] < 127))
			{
				putchar('\\');
				ft_hexa(str[i]);
			}
			else
				putchar(str[i]);
			i++;
		}


}

int main(void)
{

	char a[50] = "dasdadad\ndasdsadad";

	ft_putstr_non_printable(a);


	return(0);
}
