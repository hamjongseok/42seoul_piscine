#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int nb)
{

        long num;
		
        num = nb;

        if(num < 0) 
        {
            ft_putchar('-');  
	          num *= -1;
        }

        if(num > 9)
        {
            ft_putnbr(num / 10);
            ft_putchar(num % 10 + '0'); 
        }
        else
        {
            ft_putchar(num + '0');
        }
}

int main(void)
{

    ft_putnbr(1234);

    return(0);
}
