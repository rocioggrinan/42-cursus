#include "libft.h"

char *ft_strchr(const char *s, int c) {
    int i;
    i = 0;

    
    while (s[i] != '\0') 
    {
        if (s[i] == c) 
            return (char*)&s[i];
        i++;
    }

    return (NULL);
}
/*
int main() {
    char *a = "navidad";
    char *prt = ft_strchr(a, 'z');
    char *prt2 = strchr(a, 'z');
    printf("return2:%s\n", prt2);
    printf("return:%s\n", prt);
    return 0;
}*/