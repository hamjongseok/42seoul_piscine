#include  <unistd.h>
void	putchar(char c)
{
		write(1, &c, 1);

}
void	ft_hexa(char c)
{		
		int f;
		int d;
		f = c / 16;
		putchar(f + '0');
		d = c % 16;
		if(d == 10)
			putchar('a');
		else if(d == 11)
			putchar('b');
		else if(d == 12)
			putchar('c');
		else if(d == 13)
			putchar('d');
		else if(d == 14)
			putchar('e');
		else if(d == 15)
			putchar('f');
		else
			putchar(d+ '0');
}
void	ft_putstr_non_printable(char *str)
{
		int i;
		i = 0; 

		while(str[i] != '\0')
		{
			if(str[i] < 32 || str[i] > 126)
			{
				putchar('\\');
				ft_hexa(str[i]);
			}
			else
				putchar(str[i]);
			
			i++;
		}
		
		putchar('\n');

}

int	main(void)
{
	
	char a[30] = "Coucou\ftu vas bien ?";

	ft_putstr_non_printable(a);	


	return(0);
}
