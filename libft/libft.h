#ifndef LIBFT_H
# define LIBFT_H 

/*===================Includes=================*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/*===================Functions=================*/

int	ft_atoi(const char *str);
void    *ft_memset(void *str, int c, size_t n); 
void    ft_bzero(void *str, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
int ft_strlen(const char *a);
int ft_isalnum(int a);
int ft_isalpha(int a);
int ft_isascii(int a);
int ft_isdigit( int a);
int ft_isprint(int a);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char *ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
char *ft_strcpy(char *dest, char *src);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char* ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);
char    ft_tolower(int c);
char    ft_toupper(int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strdup(const char *src);
char *ft_strjoin(char const *s1, char const *s2);

#endif