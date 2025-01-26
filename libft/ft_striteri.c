#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;
    i = 0;
    if (s == 0 || f == 0)
        return ;
    while(s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    } 
}
/*void printchari(unsigned int i, char *c)
{
    printf("return, patata: %c\n", *c);
}*/
/*int main()
{
    char str[] = "hola";

    printf("return: %s\n", str);
    ft_striteri(str, &printchari);
    return 0;
}*/