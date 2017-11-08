#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	putnbr(int nb)
{
	if (nb > 9)
	{
		putnbr(nb/10);
		putnbr(nb%10);
	}
	else
		ft_putchar(nb + '0');
}
int main(int ac, char **av)
{
	if (ac > 1)
		putnbr(ac - 1);
	ft_putchar('\n');
	return (0);
}