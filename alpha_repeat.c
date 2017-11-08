
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		get_pos_alpha(char c)
{
	int	i;
	// константа для храрнения алфавита
	char *alpha = "abcdefghjklmnopqrstuvwxyz\0";

	i = 0;
	// если буква заглавная
	if (c >= 'A' && c <= 'Z')
		// сделать ее строчной
		c += 32;
	// пока не кончился алфавит
	while (alpha[i] != '\0')
	{
		// если совпадают - то вернуть номер
		if (alpha[i] == c)
			return (i);
		i++;
	}
	// если дошел до этого места - то это не буква
	// значит вернем -1
	return (-1);
}

void	print_alpha(char *s)
{
	int	k;
	int	i;

	i = 0;
	// бежим по строке
	while (s[i] != '\0')
	{
		// получаем номер элемента в алфавите
		// a = 0, b = 1, c = 3, etc.
		k = get_pos_alpha(s[i]);
		// пока позиция не ноль
		while (k >= 0)
		{
			// печатаем текущую букву
			write(1, s + i, 1);
			// уменьшаем счетчик
			k--;
		}
		// идем дальше по строке
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		print_alpha(av[1]);
	write(1, "\n", 1);
	return (0);
}