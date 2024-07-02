
# Libft

The libft library is the first project you tackle at 42. Its objective is to reprogram functions from the standard C library, along with additional routines that will be useful in future projects. It aims to teach and reinforce fundamental low-level and C programming concepts, ranging from variables, functions, pointers and data types to strings, arrays, memory allocation and linked lists. This project also emphasizes understanding how memory works, the differences between the heap and the stack, and how data is managed within these areas.

## Overview

This project consists of three parts:

### Libc Functions

This part consists of replicating a few short functions exactly as they work in the standard library. These are the ones:

* [isalpha](https://man7.org/linux/man-pages/man3/isspace.3.html) 
* [isdigit](https://man7.org/linux/man-pages/man3/isspace.3.html)
* [isalnum](https://man7.org/linux/man-pages/man3/isspace.3.html)
* [isascii](https://man7.org/linux/man-pages/man3/isspace.3.html)
* [isprint](https://man7.org/linux/man-pages/man3/isspace.3.html)
* [strlen](https://www.man7.org/linux/man-pages/man3/strlen.3.html)
* [memset](https://man7.org/linux/man-pages/man3/memset.3.html)
* [bzero](https://man7.org/linux/man-pages/man3/bzero.3.html)
* [memcpy](https://man7.org/linux/man-pages/man3/memcpy.3.html)
* [memmove](https://man7.org/linux/man-pages/man3/memmove.3.html)
* [strlcpy](https://linux.die.net/man/3/strlcpy)
* [strlcat](https://linux.die.net/man/3/strlcat)
* [toupper](https://man7.org/linux/man-pages/man3/toupper.3.html)
* [tolower](https://man7.org/linux/man-pages/man3/toupper.3.html)
* [strchr](https://www.man7.org/linux/man-pages/man3/strchr.3.html)
* [strrchr](https://www.man7.org/linux/man-pages/man3/strchr.3.html)
* [strncmp](https://man7.org/linux/man-pages/man3/strncmp.3p.html)
* [memchr](https://man7.org/linux/man-pages/man3/memchr.3.html)
* [memcmp](https://man7.org/linux/man-pages/man3/memcmp.3.html)
* [strnstr](https://man.freebsd.org/cgi/man.cgi?query=strnstr&sektion=3)
* [atoi](https://man7.org/linux/man-pages/man3/atoi.3.html)
* [calloc](https://man7.org/linux/man-pages/man3/calloc.3p.html)
* [strdup](https://man7.org/linux/man-pages/man3/strdup.3.html)

You can click on each of the functions to check their manual page.

### Additional Functions

This section includes several functions that either do not exist in the standard C library or exist but behave slightly differently. These are a series of functions that we will use frequently and will be extremely useful to us.

#### ft_substr

```
char *ft_substr(char const *s, unsigned int start, size_t len);
```

Allocates and returns a substring from the string 's'.
The substring begins at index 'start' and is of maximum size 'len'.

* Return value: The substring. NULL if the allocation fails.
* Parameters:
    * 's': The original string.
    * 'start': The starting index of the substring.
    * 'len': The maximum size of the substring.

#### ft_substr

```
char *ft_strjoin(char const *s1, char const *s2);
```

Allocates and returns a new string, which is the result of the concatenation of 's1' and 's2'.

* Return value: The new string. NULL if the allocation fails.
* Parameters:
    * s1: The prefix string.
    * s2: The suffix string.

#### ft_strtrim

```
char *ft_strtrim(char const *s1, char const *set);
```

Allocates and returns a copy of 's1' with the characters specified in 'set' removed form the beginning and the end of the string.

* Return value: The trimed string. NULL if the allocation fails.
* Parameters:
    * s1: The string to be trimmed.
    * set: The reference set of characters to trim.

#### ft_split

```
char **ft_split(char const *s, char c);
```

Allocates and returns an array of strings obtained by splitting ’s’ using the character 'c' as a delimiter. The array must end
with a NULL pointer.

* Return value: The array of new strings resulting from the split. NULL if the allocation fails.

* Parameters:
    * s: The string to be split.
    * c: The delimiter character.

#### ft_itoa

```
char *ft_itoa(int n);
```

Allocates and returns a string representing the integer received as an argument. Negative numbers must be handled.

* Return value: The string representing the integer. NULL if the allocation fails.

* Parameters:
    * n: the integer to convert.

#### ft_strmapi

```
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

Applies the function 'f' to each character of the string ’s’, and passing its index as first argument to create a new string resulting from successive applications of ’f’.

* Return value: The string created from the successive applications of 'f'. Returns NULL if the allocation fails.

* Parameters:
    * s: the string on which to iterate.
    * f: the function to apply to each character.

#### ft_striteri

```
void ft_striteri(char *s, void (*f)(unsigned int, char*));
```
Applies the function 'f' on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.

* Return value: None.

* Parameters:
    * s: the string on which to iterate.
    * f: the function to apply to each character.

#### ft_putchar_fd

```
void ft_putchar_fd(char c, int fd);
```

Outputs the character 'c' to the given file descriptor.

* Return value: None.

* Parameters:
    * c: The character to output.
    * fd: The file descriptor on which to write.

#### ft_putstr_fd

```
void ft_putstr_fd(char *s, int fd);
```

Outputs the string 's' to the given file descriptor.

* Return value: None.

* Parameters:
    * s: The string to output.
    * fd: The file descriptor on which to write.

#### ft_putendl_fd

```
void ft_putendl_fd(char *s, int fd);
```

Outputs the string 's' to the given file descriptor followed by a newline.

* Return value: None.
* Parameters:
    * s: The string to output.
    * fd: The file descriptor on which to write.

#### ft_putnbr_fd

```
void ft_putnbr_fd(int n, int fd);
```

Outputs the integer 'n' to the given file descriptor.

* Return value: None.
* Parameters:
    * n: The integer to output.
    * fd: The file descriptor on which to write.


### Bonus Functions

The functions created in the bonus section serve as an introduction to linked lists, a very powerful tool when dealing with projects that require handling complex data sets.

#### ft_lstnew

```
t_list *ft_lstnew(void *content);
```

Allocates (with malloc(3)) and returns a new node. The member variable 'content' is initialized with the value of the parameter 'content'. The variable 'next' is initialized to NULL.

* Return value: The new node.
* Parameters:
    * Content: The content to create the node with.

####  ft_lstadd_front

```
void ft_lstadd_front(t_list **lst, t_list *new);
```

Adds the node 'new' at the beginning of the list.

* Return value: None.
* Parameters:
    * lst: The address of a pointer to the first link of a list.
    * new: The address of a pointer to the node to be added to the list.

#### ft_lstsize

```
void ft_lstadd_front(t_list **lst, t_list *new);
```

Counts the number of nodes in a list.

* Return value: the length of the list.
* Parameters:
    * lst: The beginning of the list.

#### ft_lstlast

```
t_list *ft_lstlast(t_list *lst);
```

Returns the last node of the list.

* Return value: Last node of the list.
* Parameters:
    * lst: The beginning of the list.

#### ft_lstadd_back

```
void ft_lstadd_back(t_list **lst, t_list *new);
```

Adds the node 'new' at the end of the list.

* Return value: None.
* Parameters:
    * lst: The address of a pointer to the first link of a list.
    * new: The address of a pointer to the node to be added to the list.

#### ft_lstdelone

```
void ft_lstdelone(t_list *lst, void (*del)(void*));
```

Takes as a parameter a node and frees the memory of the node’s content using the function 'del' given as a parameter and free the node. The memory of 'next' must not be freed.

* Return value: None.
* Parameters:
    * lst: The node to free.
    * del: The address of the function used to delete the content.

#### ft_lstclear

```
void ft_lstclear(t_list **lst, void (*del)(void*));
```

Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.

* Return value: None.
* Parameters:
    * lst: The address of a pointer to a node.
    * del: The address of the function used to delete the content of the node.

#### ft_lstiter


```
void ft_lstiter(t_list *lst, void (*f)(void *));
```

Iterates the list 'lst' and applies the function 'f' on the content of each node.

* Return value: None.
* Parameters:
    * lst: The address of a pointer to a node.
    * del: The address of the function used to delete the content of the node.

#### ft_lstmap

```
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```

Iterates the list 'lst' and applies the function 'f' on the content of each node. Creates a new list resulting of the successive applications of the function 'f'. The 'del' function is used to delete the content of a node if needed.

* Return value: The new list. NULL if the allocation fails.
* Parameters:
    * lst: The address of a pointer to a node.
    * f: The address of the function used to iterate on the list.
    * del: The address of the function used to delete the content of a node if needed.
## One Final Note

For many, this project marked their first serious encounter with programming beyond the 42 pool, so many functions are not entirely efficient or well-written. However, although I could rewrite and optimize some of them, for now I prefer to leave them as they are. I enjoy revisiting from time to time to see how it was the first time I programmed, for example, ft_strjoin or ft_split, thinking about how I would do it now, and realizing how much I've improved in programming.
