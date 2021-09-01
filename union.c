#include <unistd.h>
int	ft_check1(char *s, char c, int	n)
{
	while (--n >= 0)
		if (s[n] == c)
			return (0);
	return (1);
}

int	ft_check2(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (ft_check1(argv[1], argv[1][i], i) == 1)
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (ft_check1(argv[2], argv[2][i], i) == 1)
				if (ft_check2(argv[1], argv[2][i]) == 1)
					write(1, &argv[2][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
