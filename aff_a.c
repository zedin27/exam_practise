/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgurova <dariagurova91@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 14:40:22 by dgurova           #+#    #+#             */
/*   Updated: 2017/04/23 11:16:09 by dgurova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int argc, char **argv)
{
	char a;
	char *av;

	av = argv[1];
	a = 'a';
	if (argc == 1)
	{
		ft_putchar(a);
		ft_putchar('\n');
	}
	while (*av != '\0')
	{
		if (*av  == a)
		{
			ft_putchar(a);
			break ;
		}
		av++;
	}
	ft_putchar('\n');
	return (0);
}


