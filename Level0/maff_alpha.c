#include <unistd.h>

int	main(void)
{
	char	upA;
	char	loA;
	int	i;

	upA = 'B';
	loA = 'a';
	i = 0;
	while (i < 26)
	{
		if (i % 2 == 0)
		{
			write(1, &loA, 1);
			loA += 2;
		}
		else
		{
			write(1, &upA, 1);
			upA += 2;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
