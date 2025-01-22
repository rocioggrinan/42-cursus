#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *b;
    int count;
    int count2;
    int a;
    int c;

    if (!s1 || !s2)
        return (NULL);
    a = ft_strlen (s1);
    c = ft_strlen (s2);
    b = (char *) malloc (sizeof(char) * ( a + c + 1));
    if (!b)
        return (NULL);
    count = 0;
    while (s1[count] != '\0')
    {
        b[count] = s1[count];
        count++;
    }
    count2 = 0;
    while (s2[count2] != '\0')
    {
        b[count + count2] = s2 [count2];
        count2++;
    }
    b [count + count2] = '\0';
    return (b);
}

// int main()
// {
//     char *s1;
//     char *s2;
//     s2 = "mama";
//     s1 = "papa ";
//     char *result;
//     result = ft_strjoin(s1, s2);
    
//     printf("%s", result);
//     if (result == NULL) {
//         printf("Error al concatenar las cadenas.\n");
//         return 1;
//     }

//     printf("Resultado de la concatenación: %s\n", result);
    
//     free(result);

//     return 0;
// }


/*int main()
{
    char *s1 = "papa ";
    char *s2 = "mama";
    
    char *result = ft_strjoin(s1, s2);
    
    if (result == NULL) {
        printf("Error al concatenar las cadenas.\n");
        return 1;
    }

    printf("Resultado de la concatenación: %s\n", result);
    
    free(result);

    return 0;
}*/