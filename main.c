#include "libft.h"

//int main(void)
//{
/*

	int a = atoi("2147483648");
	int b = ft_atoi("t147483648");
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
*/

/*

	char s[4] = "hola";
	ft_bzero(s, 4);
	printf("%s\n", s);
	return (0);
*/

/*

	char *a = ft_calloc(4, 4);
	printf("%s\n", a);

*/

/*
	int a = ft_isalnum('7');
	int b = ft_isalnum('a');
	int c = isalnum(91);
	int d = isalnum(91);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	return (0);
*/

/*
	int a = ft_isalpha('a');
	int b = isalpha('a');
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
*/

/*
	int a = ft_isascii(0);
	int b = isascii(0);
	int c = ft_isascii(127);
	int d = isascii(127);	
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n",a);
	printf("%d\n", a);
	return (0);
*/

/*
	int a = ft_isdigit('7');
	int b = isdigit('a');
	printf("%d", a);
	printf("%d", b);
	return (0);
*/

/*
	int a = ft_isprint(1);
	int b = isprint(1);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
*/

/*
	int a[7] = {-49, 49, 1, -1, 0, -2, 2};
	char *b = ft_memchr(a, -1, 7);
	char *c = memchr(a, -1, 7);
	printf("%s\n", b);
	printf("%s\n", c);
	return 0;
*/

/*
	char *a = "abc";
	char *b = "abc";
	int c = ft_memcmp (a, b, 7);
	int d =	memcmp(a, b, 7);
	printf("%d\n", c);
	printf("%d\n", d);
	return 0;
*/

/*
	char a[4] = "hola";
	char b[4] = "aaaa";
	char *c = ft_memcpy(a, b, 4);
	char *d = memcpy(a, b, 4);
	printf("%s\n", c);
	printf("%s\n", d);
	return(0);
*/

/*
	char a[400] = "Hola";
	char b[400] = "Adios";
	char *c = ft_memmove(a, b, 1);
	char *d = memmove(a, b, 1);
	printf("%s\n", c);
	printf("%s\n", d);
	return 0;
*/

/*
	char b[4] = "hola";
	ft_memset(b, 'a', 2);
	printf("%s\n", b);
	return (0);
*/

/*
	char *s = "teste"; 
	char *b = ft_strchr(s, 0); 
	char *c = strchr(s, 0);
	printf("%s\n", b);
	printf("%s\n", c);
	return (0);
*/

/*
    char *a = "HoladsfasdfLKJASDFJa";
    char *z = ft_strdup(a);
    printf("%s\n", z);
    return (0);
*/

/*
	char a[20] = "Hola";
	char b[20] = "Adios";
	char *c = ft_strjoin(a, b);
	printf("%s\n", c);
	return 0;
*/
/*
	char a[20];
	char b[100] = "lorem ipsum dolor sit amet";
	memset(a, 'r', 15);
	size_t n = ft_strlcat(a, b, 5);
	printf("Return is %zu and string is %s\n", n, a);
	return 0;
*/

/*
	char dst[29] = "\0";
	char *src = "\0";
	size_t a = ft_strlcpy(dst, src, 7);
	size_t b = strlcpy(dst, src, 7);
	printf("Size is %ld, string is'%s'\n", a, dst);
	printf("Size is %ld, string is'%s'\n", b, dst);
	return 0;
*/

/*
	int a = ft_strlen("hola");
	printf("%d\n", a);
	return (0);
*/

/*
	char *a = "amcasldffj";
	char *b = "aaaaaz";
	int c = ft_strncmp(a, b, 10);
	int d = strncmp(a, b, 10);
	printf("%d\n", c);
	printf("%d\n", d);
	return 0;
*/

/*
	char *a = "Hola";
	char *b = "";
	char *c = ft_strnstr(a, b, 4);
	printf("%s\n", c);
	return 0;
*/

/*
	char *s = "teste";
	char *a = ft_strrchr(s, ('s') + 128);
	char *b = strrchr(s, ('s') + 128);
	printf("%s\n", a);
	printf("%s\n", b);
	return (0);
*/
/*
	const char s1[50] = "";
	const char *set = "abcd";
	char *a = ft_strtrim(s1, set);
	printf("%s\n", a);
	return (0);
*/
/*
	char a[20] ="";
	char *b = ft_substr(a, 1, 11);
	printf("%s\n", b);

	*/
/* int a = ft_tolower('>'); printf("%c\n", a);
	return (0);
*/

/*
	int new = ft_toupper('i');
	printf("%c\n", new);
	return (0);
*/
/*
int a = -8301237;
char *b = ft_itoa(a);
printf("%s\n", b);
*/

/*
char fool(unsigned int n, char c)
	{
		c = c - 32;
		return (c);
	}

void f(unsigned int n, char* s)
{
	printf("%d  ", n);
	printf("%s\n", s);
}

int	main (void)
{

//	char *rst;
	char *s = "hola";

//	rst = ft_strmapi(s, fool);

	ft_striteri(s, f);
//	printf("%s\n", rst);


*/
int main(void)
{
	int i = 0;
	char *s = "____Hola_que___tal_estamos___todos__";
	char c = ' ';
	char **ptr = ft_split(s, c);	
	while(ptr[i])
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	i = 0;
	while(ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	ft_split(s, c);
	return 0;
}
