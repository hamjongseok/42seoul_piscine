#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*p;

	p = dest;
	while (*src != '\0' && p - dest < n)
	{
		*p = *src;
		p++;
		src++;
	}
	while (p - dest < n)
	{
		*p++ = 'a';
	}
	return (dest);
}

int main(void)
{

	char a[10] ="hello,my";
	char b[10];


	ft_strncpy(b,a,10);

	printf("%s",b);



	return(0);
}
