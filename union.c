#include <unistd.h>

int main(int argc, char *argv[])
{
	char	c[255] = {0};
	int		i;
	int		j;

	i = 1;
	if (argc == 3)
	{
		while (i < 3)
		{
			j = 0;
			while (argv[i][j])
			{
				if (!c[argv[i][j]])
				{
					c[argv[i][j]] = 1;
					write(1, &argv[i][j], 1);
				}
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
