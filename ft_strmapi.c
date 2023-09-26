#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;
	unsigned int	size;

	size = ft_strlen(s);
	ptr = (char *)malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while(s[i])
	{
		ptr[i] = f(i, s[i]); 
		i++;
	}
	ptr[i] = f(i, 0);
	return (ptr);
}

