/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgurova <dariagurova91@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 15:51:14 by dgurova           #+#    #+#             */
/*   Updated: 2017/04/23 11:29:54 by dgurova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rotone(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			ft_putchar('a' + (*str - 'a' + 1) % 26);
		else if (*str >= 'A' && *str <= 'Z')
			ft_putchar('A' + (*str - 'A' + 1) % 26);
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
	ft_rotone(argv[1]);
	ft_putchar('\n');
	return(0);
}

