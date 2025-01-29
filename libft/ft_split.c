/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:33:42 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:33:42 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_str_c_len(const char *s, char c)
{
	int	count;

	count = 0;
	while (s[count] && s[count] != c)
		count++;
	return (count);
}
static int	ft_str_len(const char *s, char c)
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
static void	*limpiar_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}
char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		count;
	int		len;

	j = 0;
	if (!s)
		return (NULL);
	count = ft_str_len(s, c);
	result = (char **)malloc(sizeof(char *) * count + 1);
	if (!result)
		return (NULL);
	result[count] = NULL;
	i = 0;
	while (s[count] != '\0')
	{
		if (s[i] != c)
		{
			result[i] = ft_substr(s, 0, ft_str_c_len(s, c));
			if (!s[i++])
				return (limpiar_split(result));
			s += ft_str_c_len(s, c);
		}
		else
			i++;
	}
	return (result);
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
	return (0);
}*/
/*int		main(void)
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

	return (0);
}*/