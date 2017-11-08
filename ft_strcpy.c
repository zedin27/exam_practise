/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgurova <dariagurova91@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 13:20:18 by dgurova           #+#    #+#             */
/*   Updated: 2017/04/22 15:48:30 by dgurova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	if (*s2 >= *s1)
		while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int main()
{
	char src[] = "fgfyuhg";
   char dest[20];
   ft_strcpy(src,dest);
printf("%s", dest);
return(0);
}

