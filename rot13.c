#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot_13(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			ft_putchar('a' + (*str - 'a' + 13) % 26);
		else if (*str >= 'A' && *str <= 'Z')
			ft_putchar('A' + (*str - 'A' + 13) % 26);
		else
			ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if(argc != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	ft_rot_13(argv[1]);
	ft_putchar('\n');
	return(0);
}