
#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void    *result;

    result = malloc(nmemb * size);
    if(!result)
        return (0);
    ft_bzero(result, nmemb * size);
    return (result);
}
/*int main()
{
    int *array = (int *)ft_calloc(5, sizeof(int));

    if (!array) {
        printf("Error al asignar memoria\n");
        return 1;
    }
    printf("memoria asiganada e inicializada con exito\n");

    free(array);
    return 0;
}*/
