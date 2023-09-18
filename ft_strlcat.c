#include <string.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t ft_strlcat (char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t k;

	i = 0;
	k = 0;
	while (dst[i])
		i++;
	while (k < (dstsize - ft_strlen(dst) - 1))
	{
		dst[i] = src[k];	
		i++;
		k++;
	}
	dst[i] = '\0';
	return (strlen(src) + strlen(dst));
}

int main (void)
{
	char *a = "Hola";
	char *b = "Adios";
	size_t n = ft_strlcat(a, b, 10);
	printf("Return is %zu and string is %s\n", n, b);
	return 0;
}
