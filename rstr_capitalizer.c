#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	 ft_space_tab(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}

int	 ft_up(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int ft_low(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i;
		int j;

		i = 1;
		j = 0;
		while (i < argc)
		{
			while (argv[i][j] != '\0')
			{
				if (ft_low(argv[i][j]) == 1 && (ft_space_tab(argv[i][j + 1]) == 1 || argv[i][j + 1] == '\0'))
					ft_putchar(argv[i][j] - 32);
				else if (ft_low(argv[i][j]) == 1 && ft_space_tab(argv[i][j + 1]) == 0)
					ft_putchar(argv[i][j]);
				else if (ft_up(argv[i][j]) == 1 && ft_space_tab(argv[i][j + 1]) == 0 && argv[i][j + 1] != '\0')
					ft_putchar(argv[i][j] + 32);
				else
					ft_putchar(argv[i][j]);
				j++;
			}
			j = 0;
			i++;
			ft_putchar('\n');
		}
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
