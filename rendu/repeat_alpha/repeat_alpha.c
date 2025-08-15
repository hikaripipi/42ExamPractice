#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	get_count(char c)
{
	int	i;

	i = 0;
	if (c >= 'A' && c <= 'Z')
	{
		i = c - 'A' + 1;
	}
	else if (c >= 'a' && c <= 'z')
	{
		i = c - 'a' + 1;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	count;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		count = get_count(argv[1][i]);
		if (count == 0)
		{
			ft_putchar(argv[1][i]);
		}
		while (count > 0)
		{
			ft_putchar(argv[1][i]);
			count--;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
