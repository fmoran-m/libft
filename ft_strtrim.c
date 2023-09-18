#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(char const *s1)
{
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	z;	
	size_t	i;
	char *ptr;

	a = 0;
	i = 0;
	z = ft_strlen(s1) - 1;
	while (set[i])
	{
		if (set[i] == s1[a])
		{
			a++;
			i = -1;
		}
		i++;
	}
	i = 0;
	while (set[i])
	{
		if (set[i] == s1[z])
		{
			z--;
			i = -1;
		}
		i++;
	}
	ptr = (char *)malloc((z - a + 2)*(sizeof(char) + 1));
	i = 0;
	while(a <= z)
	{
		ptr[i] = s1[a];
		i++;
		a++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int main (void)
{
	const char s1[20] = "_sd__Hola_f__";
	const char *set = "sdf_";
	char *a = ft_strtrim(s1, set);
	printf("%s\n", a);
	return (0);
}
