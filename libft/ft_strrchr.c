#include "libft.h"

char *ft_strrchr(const char *s, int c) {
    int i;
    i = 0;

    while (s[i] != '\0')
        i++;
    while (i >= 0)
    {
        if (s[i] == c)
            return (char*)&s[i];
        i--;
    }
    return (NULL);
}

/*int main() {
    char *a = "navidad";
    char *prt = ft_strrchr(a, 'z');
    char *prt2 = strrchr(a, 'z');
    printf("return:%s\n", prt);
    printf("return:%s\n", prt2);
    return 0;
}*/