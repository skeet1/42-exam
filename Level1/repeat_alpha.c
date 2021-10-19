#include <unistd.h>

int	main(int argc, char **argv)
{
	int	rep;
	int	i;
	int	j;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				rep = argv[1][i] - 96;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				rep = argv[1][i] - 64;
			while (j < rep)
			{
				write(1, &argv[1][i], 1);
				j++;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}#include <unistd.h>

int	main(int argc, char **argv)
{
	int	rep;
	int	i;
	int	j;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				rep = argv[1][i] - 96;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				rep = argv[1][i] - 64;
			while (j < rep)
			{
				write(1, &argv[1][i], 1);
				j++;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
