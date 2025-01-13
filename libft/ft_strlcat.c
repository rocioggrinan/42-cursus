#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
    int a;
    int b;
    a = 0;

    while (dest[a] != '\0')
        {
            a++;
        }
    b = 0;
    while (a < n)
        {
            dest[a] = src[b];
            a++;
            b++; 
        }
    dest[a] = '\0';
    return a;
}

/*int main() {
    const char src[7] = "azul";
    char dest[13] = "rojo ";
    ft_strlcat(dest, src, 6);
    printf("%s", dest);
    
    return 0;
}*/
