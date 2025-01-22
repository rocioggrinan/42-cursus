#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int a;
    int b;
    int c;
    char *s2;

    a = 0;
    b = 0;
    if (!s1 || !set)
        return (NULL);
    
    //izquierda a derecha
    while (s1[a] != '\0')
    {
        b = 0;
        while (set[b] != '\0')
        {
            if (s1 [a] == set[b])
            {
                break;
            }
            b++;
        }
        if(set[b] == '\0')
        {
            break;
        }
        a++;
    }
    //derecha a izquierda
    c = ft_strlen(s1) - 1;
    while (c >= 0)
    {
        b = 0;
        while (set[b] != '\0')
        {
            if (s1 [c] == set[b])
            {
                break;
            }
            b++;
        }
        if(set[b] == '\0')
        {
            break;
        }
        c--;
    }
    s2 = ft_substr(s1, a, (c-a)+ 1);
    return (s2);

}

/*int main()
{
    printf("%s \n", ft_strtrim("HOLA1A", "HO2A"));
    return(0);
}*/