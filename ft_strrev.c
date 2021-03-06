/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgurova <dariagurova91@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 09:02:14 by dgurova           #+#    #+#             */
/*   Updated: 2017/09/28 17:46:41 by dgurova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_strrev(char *str)
{
	int i;
	int len;
	char *tmp;

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	while (i < (len / 2))
	{
		tmp = str[len - (i + 1)];
		str[len - (i + 1)] = str[i];
		str[i] = tmp;
		i++;

	}
	return (str);
}

int main()
{
	char str[] = "dasha";
	ft_strrev(str);

	printf("%s", str);
	return (0);
}

