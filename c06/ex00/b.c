#include <unistd.h>

void	print(char *c) //
{
	while (*c != '\0')
	{
		write(1, **c, 1); // ??이건 뭐고........... &* ??     **이렇게하면안되노 
		c++;
		}
}

int		main(int argc, char **argv) //기본 양식 
{
	if (argc == 1)  //argc의 개수가 1이라면 
	{
		print(argv[0]); //argv[0]을 출력 , 근데여기서 **포인터인데 이게가능? 
		write(1, "\n", 1);
	}
	return (0);
}
