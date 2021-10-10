#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		write(1, &s[i], 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 4)
	{
		if (ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
		{
			write(1, "\n", 1);
			return (0);
		}
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			i++;
		}
		ft_putstr(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
