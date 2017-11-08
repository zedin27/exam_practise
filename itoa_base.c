/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgurova <dariagurova91@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 23:23:36 by dgurova           #+#    #+#             */
/*   Updated: 2017/09/25 23:23:45 by dgurova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

char *hex = "0123456789ABCDEF";

char *ft_strdup(char *src, int len)
{
	char *dest;
	int i=0;
	dest = malloc(len + 1);
	while(i<len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int get_digits(int n, int base)
{
	int i = 1;
	while (n >= base)
	{
		n/=base;
		i++;
	}
	return i;
}

char	*ft_itoa_base(int value, int base)
{
	char *str;
	int is_neg = 0;
	int len;
	if(value < 0)
	{
		if(base==10)
		{
			if(value == -2147483648)
				return ft_strdup("-2147483648", 11);
			is_neg = 1;
		}
		value = -value;
	}
	len = get_digits(value, base) + is_neg + 1;
	str = malloc(len);
	str[--len] = '\0';
	while(len--)
	{
		str[len] =  hex[value % base];
		value /= base;
	}
	if(is_neg)
		str[0] = '-';
	return str;
}