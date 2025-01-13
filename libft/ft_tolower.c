#include <stdio.h>

char    ft_tolower(int c)
{
     if (c <= 'Z' && c >= 'A')
    c = c + 32;
    return ((char )c);
}
/*
int main() {
    unsigned char   c;
    
    c = 's';
    printf("return:%c\n", ft_tolower(c));
    return 0;
}*/