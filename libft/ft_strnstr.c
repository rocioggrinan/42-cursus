#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
char* ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int a;
    int b;
    size_t l;

    a = 0;
    b = 0;
    l = 0;

    if (needle[0] == '\0')
        return ((char*)haystack);
    while (*haystack != '\0' && len > 0)
    {
        if (needle[a] == *haystack)
        {
            l = len;
            while (needle[a] == haystack[b] && needle[a] != '\0' && haystack[b] && 1 > 0)
            {
                a++;
                b++;
                l--;
            }
            if (needle[a] == '\0')
            {
                return ((char*)haystack);
            }
        }
        haystack++;
        len--;
    }
    return (0);
}

int main() {
    const char *haystack = "AEFABD";
    const char *needle = "EFA";
    size_t len = 8;

    char *result = ft_strnstr(haystack, needle, len);
    char result2 = strnstr(haystack, needle, len);

    if (result)
    {
        printf("Return: %s\n", result);
    } else {
        printf("Return: (null)\n");
    }
    if (result2)
    {
        printf("2Return: %s\n", result);
    } else {
        printf("2Return: (null)\n");
    }
    return 0;
}