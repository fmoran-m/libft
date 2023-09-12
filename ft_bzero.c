#include <string.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	size_t	i;
	char *str;
	
	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

int main (void)
{
	char s[4] = "hola";
	ft_bzero(s, 4);
	printf("%s\n", s);
	return (0);
}
