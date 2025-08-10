#include <unistd.h>

int	main(void)
{
	const char fizzbuzz[] = "fizzbuzz\n";
	const char fizz[] = "fizz\n";
	const char buzz[] = "buzz\n";
	int i;
	char buf[4];
	int len;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, fizzbuzz, 9);
			i++;
		}
		else if (i % 3 == 0)
		{
			write(1, fizz, 5);
			i++;
		}
		else if (i % 5 == 0)
		{
			write(1, buzz, 5);
			i++;
		}
		else
		{
			if (i == 100)
			{
				write(1, "100\n", 4);
				i++;
			}
			else
			{
				len = 0;
				if (i >= 10)
				{
					buf[len++] = (i / 10) + '0';
				}
				buf[len++] = (i % 10) + '0';
				buf[len++] = '\n';
				write(1, buf, len);
				i++;
			}
		}
	}
	return (0);
}