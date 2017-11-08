#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int a;
	int i;

	a = 128;
	i = 0;
	while (i < 8)
	{
		if (octet >= a)
		{
			ft_putchar ('1');
			octet -= a;
			a = a / 2;
		}
		else
		{
			ft_putchar ('0');
			a = a / 2;
		}
		i++;
	}
}
