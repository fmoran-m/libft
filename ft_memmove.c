#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;	
	size_t		i;
	size_t		z;

	d = dst;
	s = src;
	z = len - 1;
	i = 0;
	if (s < d)
	{
		while(s[i] && i < len)
		{
			d[z] = s[z];
			z--;
			i++;
		}
	}
	else
	{
		while (s[i] && i < len)
		{
			d[i] = s[i];
			i++;
		}
		d[i] = 0;
	}
	return ((char *)d);
}

int main (void)
{
	char a[30] = "a";
	char b[30] = "Hola";
	char *c = ft_memmove(a, b, 5);
	char *d = memmove(a, b, 5);
	printf("%s\n", c);
	printf("%s\n", d);
	return 0;
}
