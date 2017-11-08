
#include <stdio.h>


/*int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = -1;
	while (s1[++i] != '\0' && s2[i] != '\0')
		if (s1[i] != s2[i])
			break ;
	return (s1[i] - s2[i]);
}
int main()
{
	char *s1 = "dasha";
	char *s2 = "dsha";
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = -1;
while (s1[++i] != '\0' && s2[i] != '\0')
	if (s1[i] != s2[i])
		break ;
	return (s1[i] - s2[i]);
}
int main()
{
	char *s1 = "dasha";
	char *s2 = "dsha";
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}

