#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	c[255] = {0};
	int		i;
	int		j;

	i = 2;
	if (argc == 3)
	{
		while (i > 0)
		{
			j = 0;
			while (argv[i][j])
			{
				if (i == 2 && !c[argv[i][j]])
					c[argv[i][j]] = 1;
				else if (i == 1 && c[argv[i][j]] == 1)
				{
					write(1, &argv[i][j], 1);
					c[argv[i][j]] = 0;
				}
				j++;
			}
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
