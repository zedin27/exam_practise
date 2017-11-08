#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int main(int argc, char **argv)
{
	int i;
	int stop;

	if (argc == 2)
	{
		i = 0;
		stop = 0;
		while(argv[1][i] != '\0' && (stop == 0 || stop == 1))
		{
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				ft_putchar(argv[1][i]);
				stop = 1;
			}
			else if ((argv[1][i] == ' ' || argv[1][i] == '\t') && stop == 1)
			{
				stop = 2;
			}
			i++;
		}
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
		return (0);
	}

}*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_whitespaces(char *ch)
{
	while (*ch == ' ' || *ch == '\t')
		ch++;
	return(ch);
}

void	ft_print_first_word(char *str)
{
	while (*str  && *str != ' ' && *str != '\t')
	{
	  	ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}


int main(int argc, char **argv)
{
	char *ptr;

	ptr = argv[1];
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	if (argv[1][0] == ' ' || argv[1][0] == '\t')
		ptr = ft_whitespaces(argv[1]);
	ft_print_first_word(ptr);
	return (0);
}

