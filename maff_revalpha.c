#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	int i = 'z';
	int j = 'Y';
	int f = 1;
	while (f <= 26)
	{
		if (f % 2 == 1)
		{
			ft_putchar(i);
			i = i - 2;

		}
		else
		{
			ft_putchar(j);
			j = j - 2;
		}
		f++;
	}
	ft_putchar('\n');
	return (0);
}