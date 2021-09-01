#include <unistd.h>
int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char *hex, int	n)
{
	//if ((n % 16) != 0)
	if (n > 9)
	{
		if (n > 15)
			ft_print(hex, n / 16);
		ft_putchar(hex[n % 16]);
	}
	else
		ft_putchar(n + 48);
}
#include <stdio.h>
int	main(int ac, char **av)
{
	char	hex[16] = "0123456789abcdef";
	int	n;

	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		ft_print(hex, n);		
	}
	else
		write(1, "\n", 1);
}
