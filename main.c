#include "libft.h"
#include <limits.h>
#include <fcntl.h>
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
	char *a = ft_calloc(2, 1);
	printf("%s\n", a);
*/

/*
	int a = ft_isalnum('h');
	int b = ft_isalnum('0');
	int c = isalnum('h');
	int d = isalnum('0');
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	return (0);
    */
/*
	int a = ft_isalpha('l');
	int b = isalpha('l');
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
	int b = isdigit('1');
	printf("%d", a);
	printf("%d", b); 
	return (0);
*/
/*
	int a = ft_isprint(77);
	int b = isprint(77);
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
	char *c = ft_memcpy(((void *)0), ((void *)0), 3);
	char *d = memcpy(((void *)0), ((void *)0), 3);
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

	char *haystack = "abc";
	char *needle = "abcdef";
	char *c = ft_strnstr(haystack, needle, 5);
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
	char *b = ft_substr("", 0, 0);
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
int a = 1000034;
char *b = ft_itoa(a);
printf("%s\n", b);

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

	char *rst;
	char *s = "hola";

	rst = ft_strmapi(s, fool);

	ft_striteri(s, f);
	printf("%s\n", rst);


	int i = 0;
	char *s = "___Hola__que_tal_estamos____todos____";
	char c = '_';
	char **ptr = ft_split(s, c);
	while (ptr[i])
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	char *a;
	t_list *b;

	a = "deberia tener mazo memoria por aqui asignando, como es posible que todo esto sea dinamico";
	b = ft_lstnew(a);
	printf("%s\n", (char *)b -> content);
*/
/*
void ft_print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

void	f(void *a)
{
	int i;
	t_list *b;
	char *content;

	b =(t_list *) a;
	while(b)
	{
		i = 0;
		content = (char *)b->content;
		while(content)
		{
			if (content[i] == 'o')
			{
				content[i] = 'a';
				i++;
			}
		}
		b = b->next;
	}
}

int main (void)
{
	char *a = "Hola";
	char *b = "Adios";
	char *c = "Betis";

	t_list *primero;
	t_list *segundo;
	t_list *new;
	t_list **todas;

	primero = malloc(sizeof(t_list));
	segundo = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	todas = &primero;

	primero->content = a;
	primero->next = segundo;

	segundo->content = b;
	segundo->next = 0;

	new->content = c;
	new->next = 0;

	*todas = primero;
	int i = 0;

	ft_lstsize(todas);
	while (*todas)
	{
		printf("%s\n", (char *) (*todas)->content); 
		*todas = (*todas)->next;
	}
	int size;
	size = ft_lstsize(new);
	printf("%d\n", size);
	new = ft_lstlast(new);
	printf("%s\n", new->content);
*/
/*
int main (void)
{
    t_list *primero;
    t_list *segundo;
    t_list *tercero;
    char *a = ft_strdup("AAA");
    char *b = ft_strdup("HHH");
    char *c = ft_strdup("MMM");

    primero = ft_lstnew(a);
    segundo = ft_lstnew (b);
    tercero = ft_lstnew (c);
    primero->next = segundo;
    segundo->next = tercero;
    printf("%s\n",(char *)primero->content);
    printf("%s\n",(char *)segundo->content);
    printf("%s\n",(char *)tercero->content);
    ft_lstiter(primero, f);
    printf("%s\n",(char *)primero->content);
    printf("%s\n",(char *)segundo->content);
    printf("%s\n",(char *)tercero->content);
	return 0;
}
*/
/*
int main (void)
{
	int fd1;
	char *a;

	a = "furboh";
	fd1 = open("text1.txt", O_RDWR);
	ft_putendl_fd(a, fd1);
	return 0;
}
*/
