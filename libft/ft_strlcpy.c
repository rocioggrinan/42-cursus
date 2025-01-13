#include <unistd.h>
#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (dest[i] != '\0' && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
/*
int main(void)
{
    char dest[] = "Casa";
    char src[] = "Pepe";

    printf("return: %s\n", (ft_strcpy(dest, src)));
    return(0);
}*/
