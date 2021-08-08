#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	
	}
	else
		ft_putchar(n + 48);
}

void	ft_sort(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	result;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
	result = tab[0] * tab[1];
	ft_putnbr(result);
	write(1, "\n", 1);
}

int main()
{
	int	tab[5] = {3, 4, 5, 8, 10};
	ft_sort(tab, 5);
}
