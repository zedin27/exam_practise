
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printlast(char *ch)
{
	char	*last;
	int		i;
	int		valid;

	i = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] < 33 && ch[i + 1] > 32)
		{
			last = &ch[i + 1];
			valid = 1;
		}
		i++;
	}
	i = 0;
	if (valid)
	{
		while (last[i] > 32)
		{
			ft_putchar(last[i]);
			i++;
		}
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_printlast(av[1]);
	}
	ft_putchar('\n');
	return (0);
}