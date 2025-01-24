/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-24 13:52:29 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-24 13:52:29 by rogarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*lo q tienes q hacer es hacer make y compilar el main aparte*/
/*vamos a dibujar aqui arriba q hace split*/
//dibujar? sabes usar python tutor? mejor jaja si pero no en el ordenador, vale ps pienso como hacer q lo veas yvoy a arreglar el error q hay jjaja jjajaj okey y
static int ft_str_c_len(const char *s, char c)
{
    int count;

    count = 0;
    while (s[count] && s[count] != c) // aqui vamos a añadir que compruebes si s existe para empezar, pero es obvio q existe no?
        count++;
    return count;
} //voy eh jajaj QUE ES STATIC INT (que solo se puee usar en este archivo es una buena costumbre cuando lo q creas no se usa fuera es decir ft_str_c_len solo se usa en split no? )si ps la hacemos estatica (static) 
//ahhh lo dices para luego la libraria no? claro las estaticas no se ponen en el .h solo aqui vale valee entendido

static int ft_str_len(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			s += ft_str_c_len(s, c);
		}
		else
			s++;
	}
	return (count);

}

/*
estas viendo ? yes vale split genera un problema porq lo q hace es lo siguiente

tenemos: hola, soy, isma, que, tal

y split crea 5 huecos para 5 posibles palabras:

despues mide cuanto ocupa cada palabra y reserva en cada hueco 
esto genera un problema acabas de reservar una matriz de 5 X lo que ocupen las palabras y split realmente tiene q ir eliminando todo mira baja
* * * * * * (aqui cabe hola) porque sumas en espacio no? reservas ese +1 es esa * de mas no? es el nulo ,
*
*
*
*

*/ /*aqui mismo*/

//podemos probarla?? vesla terminal?sipi y como hago para llamar a todas? *. .* .c* como era? cc *.c
// no veo porq esta mal, es el *?

static void *limpiar_split(char **str) //esta funcion tmb permite q si malloc o la propia cadena fallan porq te metan algo raro se limpie todo
{
    int i; 

    i = 0; 
    while(str[i])
    {
        free(str[i]);// borro cada posicion de la cadena
        i++;
    }
    free(str); //y la cadena en si porq antes solo la he vaciado
    return NULL; //y devuelvo nulo porq esta funcion entra cuando algo falla, osea q solo esta por si  te digo mas esta para pasar paco en estricto jajja ah hh  asiq esto es split la podemos acortar mas aun pero si quieres te la explico bn el domingo porq es mucha tralla, si mejor, osea esto es todo?? pensaba q iba a estar peor jajjajjajjaj (todo mal) esto es q te queda? de q? de fucniones, voy por esta me quedan todas las que estan por debajo de esta ah guachi
    
}
char **ft_split(char const *s, char c)
{
    char **result;
    int i;
    int j;
    int count;
    int len; 

    j = 0;

    if (!s)
        return NULL;

    count = ft_str_len(s, c);
    result = (char **)malloc (sizeof(char*) * count + 1); // las reservas se hacen fuera del bucle principal, donde?? y eso no es otra funcion?
    if (!result)
        return NULL; //esto es una protección de malloc, que protege? que malloc falle si falla devuelve null y como puede falla? con valgrind por ej q realentiza el programa ahhh vale
    result[count] = NULL;
    i = 0;
    while (s[count] != '\0')// qla i es la vertical y la j horizontal no? sip okey y la i es la longitud y la j los caracteres no?
    {
        if (s[i] != c) // ya se q hice jajaja
        {
            result[i] = ft_substr(s, 0, ft_str_c_len(s, c)); // voy a calcular la longitud de una subcadena hasta q encuentre el caracter pero eso lo haces con el len no?si pero dentro de un substr para ahorrar pasos y tener menos lineas,
            // no lo pillo, tu ft_str_c_len calcula tamaños 
            //si yo tengo Hola, soy, rocio con substr le especifico q se centre desde el punto 0 hasta q encuentre , pero y eso no lo hacia antes??pero no parabas ahhhhh vale valeee, y como lo has parado? porq es un substringy, q es eso una cadenita dentro de otra (hola dentro de hola , soy rocio)ahhhh osea como un copia y pega no realmente lo q hace es centrarse en ese trocito
            //en este if? que le pasa, que solo lo haces en ese if no? claro q mientras no encuntre la coma
            if (!s[i++])
                return(limpiar_split(result)); //si llego al final elimino esa linea o sino voy a generar demasiadas, como llegas al final? cuando llego a la coma por ej o al nulo hola - lo copio y borro el hueco y asi con todas las palabras, donde esta esto? no hemos creado la funcion aun pero es necesaria ahhhh vale vale y donde va?
            s += ft_str_c_len(s, c); 
        }
        else 
            i++; 
    }
    return result;
}
/*int main()
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
}*/
int		main()
{
	const	char *string1 = "hola me llamo ismael";
	char	c = ' '; 
	int i = 0; 

	char	**resultado = ft_split(string1, c);

	while(resultado[i])
	{
		printf("%s", resultado[i]);
		free(resultado[i]);
		i++;
	}
	free(resultado);
	
	return 0; 
}