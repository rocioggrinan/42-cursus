/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:34:15 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:34:15 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*b;
	int		count;
	int		a;
	int		c;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	c = ft_strlen(s2);
	count = 0;
	b = (char *)malloc(sizeof(char) * (a + c + 1));
	if (!b)
		return (NULL);
	while (s1[count] != '\0')
	{
		b[count] = s1[count];
		count++;
	}
	while (s2[count - a] != '\0')
	{
		b[count] = s2[count - a];
		count++;
	}
	b[count] = '\0';
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
//         return (1);
//     }

//     printf("Resultado de la concatenación: %s\n", result);

//     free(result);

//     return (0);
// }

/*int main()
{
	char *s1 = "papa ";
	char *s2 = "mama";

	char *result = ft_strjoin(s1, s2);

	if (result == NULL) {
		printf("Error al concatenar las cadenas.\n");
		return (1);
	}

	printf("return: %s\n", result);

	free(result);

	return (0);
}*/