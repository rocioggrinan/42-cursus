/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:35:29 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:35:29 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s1, char const *set)
{
	int	a;
	int	b;

	a = 0;
	while (s1[a] != '\0')
	{
		b = 0;
		while (set[b] != '\0')
		{
			if (s1[a] == set[b])
				break ;
			b++;
		}
		if (set[b] == '\0')
			break ;
		a++;
	}
	return (a);
}

static int	ft_end(char const *s1, char const *set)
{
	int	c;
	int	b;

	c = ft_strlen(s1) - 1;
	while (c >= 0)
	{
		b = 0;
		while (set[b] != '\0')
		{
			if (s1[c] == set[b])
				break ;
			b++;
		}
		if (set[b] == '\0')
			break ;
		c--;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		c;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	a = ft_start(s1, set);
	c = ft_end(s1, set);
	if (a > c)
		return (ft_substr(s1, 0, 0));
	s2 = ft_substr(s1, a, (c - a) + 1);
	return (s2);
}

/*int main()
{
	printf("%s \n", ft_strtrim("HOLA1A", "HO2A"));
	return(0);
}*/