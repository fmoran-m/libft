#include "libft.h"

int	count_words(char const *s, char c)
{
	int	flag;
	int	i;
	int	n;

	flag = 1;
	i = 0;
	n = 0;

	while(s[i])
	{
		if(s[i] != c && flag == 1)
		{
			n++;
			flag = 0;
		}
		if (s[i] == c)
			flag = 1;
		i++;
	}
	return (n);
}

int	count_str(char const *s, char c, int total)
{
	int i;

	i = total;
	while(s[i] != c && s[i])
		i++;
	return (i);
}

void	free_arrays(char **ptr, int i)
{
	int	n;

	n = 0;
	while(n < i) //OJO PUEDE ESTAR MAL
	{
		free(ptr[n]);
		n++;
	}
	free(ptr);
}

void	allocate_arrays(char const *s, char c, char **ptr)
{
	int i;
	int j;
	int total;

	i = 0;
	total = 0;
	while (s[total] == c)
		total++;
	while (i < count_words(s, c))
	{
		j = 0;
		while (s[total] != c && s[total] != 0)
		{
			ptr[i][j] = s[total];
			total++;
			j++;
		}
		ptr[i][j] = 0;
		while(s[total] == c)
			total++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int				r_size;
	int				total;
	int 			i;
	char 			**ptr;

	total = 0;
	i = 0;
	r_size = count_words(s, c);
	ptr = ft_calloc((r_size + 1), sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	while(s[total])
	{
		if (s[total] != c)
		{
			ptr[i] = (char *)ft_calloc(count_str(s, c, total) - total + 1, sizeof(char));
			if(ptr[i] == NULL)
			{
				free_arrays(ptr, i);
				return (NULL);
			}
			i++;
			total = count_str(s, c, total);
		}
		total++;
	}
	allocate_arrays(s, c, ptr);
	return (ptr);
}
