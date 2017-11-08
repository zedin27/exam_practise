#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	dup = (char*)malloc(sizeof(*dup) * (size + 1));
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
void	*ft_strdup(char *str)
{
	int i;
	int len;
	char *dup;

	i = 0;
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	dup = (char*)malloc(sizeof(*dup) * (len + 1));
	while (str[i] != '\0')
	{
		dup[i] = str[i];
	}
	i++;
	dup[i] = '\0';
	return(dup);
}
*/
int main()
{
	char *in = "dasha";
	char *out = ft_strdup(in);
	printf("%s",in);
	printf("%s", out);
	return (0); 
}