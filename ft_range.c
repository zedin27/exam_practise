/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 10:30:49 by exam              #+#    #+#             */
/*   Updated: 2016/09/02 10:48:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_abs(int n)
{
	return (n >= 0 ? n : -n);
}

int		*ft_range(int start, int end)
{
	int				*result;
	unsigned int	size;
	unsigned int	i;
	int				is_negative;

	size = ft_abs(start - end);
	result = (int *)malloc(sizeof(*result) * (size + 1));
	is_negative = start >= end ? -1 : 1;
	i = 0;
	while (i <= size)
	{
		result [i] = start + (i * is_negative);
		i++;
	}
	return (result);
}
