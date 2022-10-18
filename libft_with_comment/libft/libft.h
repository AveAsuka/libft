#ifndef TEST_H
# define TEST_H

# include <stdio.h> // printf
# include <unistd.h> // write
# include <stdlib.h> // malloc и free и atoi
# include <string.h> // Для strlen - хз, нужно ли мне
# include <strings.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

// 1.24. 
int ft_atoi(const char *str);

// 1.8.
void ft_bzero(void *s, size_t n);

// 1.25.
void * ft_calloc(size_t count, size_t size);

// 1.3.
int ft_isalnum(int ch);

// 1.1.  
int ft_isalpha(int ch);

// 1.4.
int ft_isascii(int ch);

// 1.2.
int ft_isdigit(int character);

// 1.5.
int ft_isprint(int ch);

// 2.5.
char *ft_itoa(int n);

// 3.2.
void ft_lstadd_front(t_list **lst, t_list *new);

// 3.1.
t_list *ft_lstnew(void *content);

// 1.18. 
void * ft_memchr(const void *s, int c, size_t n);

// 1.22.
int ft_memcmp(const void *s1, const void *s2, size_t n);

// 1.9.
void * ft_memcpy(void * dst, const void * src, size_t n);

// 1.10. 
void * ft_memmove(void *dst, const void *src, size_t len);

// 1.7.
void *ft_memset(void *b, int c, size_t len); 

// 2.8. 
void ft_putchar_fd(char c, int fd);

// 2.10.
void ft_putendl_fd(char *s, int fd);

// 2.11. 
void ft_putnbr_fd(int n, int fd);

// 2.9.
void ft_putstr_fd(char *s, int fd);

// 2.4. 
char **ft_split(char const *s, char c);

// 1.15.
char * ft_strchr(const char *s, int c);

// 1.26.
char *ft_strdup(const char *s1);

// 2.7. 
void ft_striteri(char *s, void (*f)(unsigned int,char*));

// 2.2. 
char *ft_strjoin(char const *s1, char const *s2);

// 1.11.
size_t ft_strlcpy(char * dst, const char * src, size_t dstsize);

// 1.12.
size_t ft_strlcat(char * dst, const char * src, size_t dstsize);

// 1.6.
size_t ft_strlen(const char *str);

// 2.6. ?! проверить, вроде верно
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

// 1.17. 
int ft_strncmp(const char *s1, const char *s2, size_t n);

// 1.20.
char * ft_strnstr(const char *haystack, const char *needle, size_t len);

// 1.16.
char * ft_strrchr(const char *s, int c);

// 2.3. 
char *ft_strtrim(char const *s1, char const *set);

// 2.1.
char *ft_substr(char const *s, unsigned int start, size_t len);

// 1.14.
int ft_tolower(int c);

// 1.13.
int ft_toupper(int c);

#endif