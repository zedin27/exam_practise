/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgurova <dariagurova91@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 09:27:32 by dgurova           #+#    #+#             */
/*   Updated: 2017/04/21 10:27:55 by dgurova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		main(void)
{
	int min;
	int maj;
	int i;
	
	min = 'a';
	maj = 'B';
	i = 0;
	while (i <= 12)
{
	ft_putchar(min);
	ft_putchar(maj);
	min = min + 2;
	maj = maj + 2;
	i++;
}
ft_putchar('\n');
return (0);
}
