#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putchar((n / 10) + 48);
		ft_putchar((n % 10) + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(n + 48);
	}
}

void	ft_tohours(int n)
{
	int	h;
	int	m;
	int	s;

	h = 0;
	m = 0;
	s = 0;
	h = n / 3600;
	m = (n % 3600) / 60;
	s = ((n % 3600) % 60) / 60;
	ft_putnbr(h);
	write(1, ":", 1);
	ft_putnbr(m);
	write(1, ":", 1);
	ft_putnbr(s);
	write(1, "\n", 1);
}

int main()
{
	ft_tohours(5600);
}
