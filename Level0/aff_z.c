#include <unistd.h>

int	main(int argc, char **argv)
{
	char	c;

	(void)argc;
	(void)argv;

	c = 'z';
	write(1, &c, 1);
	return (0);
}
