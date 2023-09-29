#include "libft.h"

int	ft_count_words(char const *s, unsigned char ca)
{
	int	flag;
	int	i;
	int	n;

	flag = 1;
	i = 0;
	n = 0;

	while(s[i])
	{
		if(s[i] != ca && flag == 1)
		{
			n++;
			flag = 0;
		}
		if (s[i] == ca)
			flag = 1;
		i++;
	}
	return (n);
}

int	ft_count_letter(char const *s, unsigned char ca, int total)
{
	int i;

	i = total;
	while(s[i] != ca && s[i])
		i++;
	return (i);
}

void	ft_free_arrays(char **ptr, int i)
{
	int	n;

	n = 0;
	while(n < i) 
	{
		free(ptr[n]);
		n++;
	}
	free(ptr);
}

void	ft_allocate_arrays(char const *s, unsigned char ca, char **ptr)
{
	int i;
	int j;
	int total;

	i = 0;
	total = 0;
	while (s[total] == ca)
		total++;
	while (i < ft_count_words(s, ca))
	{
		j = 0;
		while (s[total] != ca && s[total] != 0)
		{
			ptr[i][j] = s[total];
			total++;
			j++;
		}
		ptr[i][j] = 0;
		while(s[total] == ca)
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
	unsigned char	ca;

	total = 0;
	i = 0;
	ca = c;
	if (s == NULL)
		return (NULL);
	r_size = ft_count_words(s, ca);
	ptr = ft_calloc((r_size + 1), sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	if (r_size == 0)
	{
		ptr[i] = (NULL);
		return (ptr);
	}
	while(s[total] && i < r_size)
	{
		if (s[total] != ca)
		{
			ptr[i] = (char *)ft_calloc(ft_count_letter(s, ca, total) - total + 1, sizeof(char));
			if(ptr[i] == NULL)
			{
				ft_free_arrays(ptr, i);
				return (NULL);
			}
			i++;
			total = ft_count_letter(s, ca, total);
		}
		total++;
	}
	ft_allocate_arrays(s, ca, ptr);
	return (ptr);
}
