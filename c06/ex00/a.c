#include <unistd.h>

void	print(char *c)
{
	while (*c != '\0')
	{
		write(1, &*c, 1);
		c++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		print(argv[2]);
		write(1, "\n", 1);
	}
	return (0);
}
