#include <stdio.h>

char    ft_toupper(int c)
{
    if (c <= 'z' && c >= 'a')
    c = c - 32;
    return ((char )c);
}
/*
int main() {
    unsigned char   c;
    
    c = 'A';
    printf("return:%c\n", ft_toupper(c));
    return 0;
}*/

