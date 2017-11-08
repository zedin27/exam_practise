/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgurova <dariagurova91@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 07:31:00 by dgurova           #+#    #+#             */
/*   Updated: 2017/04/14 08:43:50 by dgurova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	 ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_replace(char *d, char a, char b)
{
	int i = 0;
	while (d[i] != '\0')
	{
		if (d[i] == a)
			ft_putchar(b);
		else 
			ft_putchar(d[i]);
		i++;
	}
}
	int main(int argc, char **argv)
	{
		if (argc == 4)
		{
			if (!(argv[3][1] !='\0' || argv[2][1] !='\0'))
					ft_replace(argv[1], argv[2][0], argv[3][0]);
		}
		ft_putchar('\n');
		return (0);
	}
