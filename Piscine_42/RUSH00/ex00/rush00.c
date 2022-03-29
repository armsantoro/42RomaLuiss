#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	xa;
	int	yb;

	yb = y;
	while (yb >= 1 && x > 0)
	{
		xa = x;
		while (xa >= 1)
		{
			if ((xa == 1 && yb == 1) || (xa == 1 && yb == y)
				|| (xa == x && yb == 1) || (xa == x && yb == y))
				ft_putchar('o');
			else if ((xa == 1) || (xa == x))
				ft_putchar('|');
			else if ((yb == 1) || (yb == y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			xa--;
		}
		yb--;
		ft_putchar('\n');
	}
}
