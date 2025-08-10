#include <unistd.h>

int	main(void)
{
	const char FIZZBUZZ[] = "fizzbuzz\n";
	const char FIZZ[] = "fizz\n";
	const char BUZZ[] = "buzz\n";

	int i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, FIZZBUZZ, 9);
			i++;
		}
		else if (i % 3 == 0)
		{
			write(1, FIZZ, 5);
			i++;
		}
		else if (i % 5 == 0)
		{
			write(1, BUZZ, 5);
			i++;
		}
		else
		{
			char buf[4];
			int len = 0;
			if (i == 100)
			{
				write(1, "100\n", 4);
			}
			else
			{
				if (i >= 10)
				{
					buf[len++] = i / 10 + '0';
				}
				buf[len++] = i % 10 + '0';
				buf[len++] = '\n';
				write(1, buf, len);
				i++;
			}
		}
	}
	return (0);
}