#include "libft.h"
// a ver tu tienes q generar un .a (que es juntar todas las funciones en un archivo)
// y los main se prueban desde fuera ¿porq? porque yo tengo q ser capaz de compilar tu libreria independiente de las pruebas q le haga y los main son para probar 
//no lo pillo quieres prbar el split? si ps compila normal como?
int main()
{
    int i;
    int j;

    i = 0;
    char** sirve = ft_split("casa pepe", ' ');
    while (sirve[j] != NULL)
    {
        printf("return\n %s", sirve[j]);
        j++;
    }
    return 0;
}