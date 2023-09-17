//#include <stdio.h>
//#include <stdlib.h>
//#include <strings.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	if (size == 0)
		return (srclen);
	srclen = ft_strlen(src);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
/*
int main (void)
{
	char dst[5] = "";
	char *src = "Holaaaaaaa";
	size_t a = ft_strlcpy(dst, src, 7);
	printf("Size is %ld, string is'%s'\n", a, dst);
	return 0;
}
*/
