#include <unistd.h>

void	print(char *c) //
{
	while (*c != '\0')
	{
		write(1, **c, 1); // ??�̰� ����........... &* ??     **�̷����ϸ�ȵǳ� 
		c++;
		}
}

int		main(int argc, char **argv) //�⺻ ��� 
{
	if (argc == 1)  //argc�� ������ 1�̶�� 
	{
		print(argv[0]); //argv[0]�� ��� , �ٵ����⼭ **�������ε� �̰԰���? 
		write(1, "\n", 1);
	}
	return (0);
}
