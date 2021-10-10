#include <unistd.h>

int	main(int argc, char **argv)
{
	char	up;
	char	low;
	int	i;

	up = 'Y';
	low = 'z';
	i = 26;
	while (i > 0)
	{
		if (i % 2 == 0)
		{
			write(1, &low, 1);
			low -= 2;
		}
		else
		{
			write(1, &up, 1);
			up -= 2;
		}
		i--;
	}
	write(1, "\n", 1);
	return (0);
}
