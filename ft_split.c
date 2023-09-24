#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int	total;
	int	partial;

	total = 0;
	while(s[total])
	{
		partial = 0;
		while(s[partial])
