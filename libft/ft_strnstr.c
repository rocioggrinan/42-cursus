/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:35:12 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:35:12 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;
	size_t	l;

	a = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0' && a < len)
	{
		if (haystack[a] == needle[0])
		{
			b = 0;
			l = a;
			while (needle[b] != '\0' && haystack[l] == needle[b] && l < len)
			{
				b++;
				l++;
			}
			if (needle[b] == '\0')
				return ((char *)&haystack[a]);
		}
		a++;
	}
	return (NULL);
}

/*int main() {
	const char *haystack = "AEFABD b";
	const char *needle = "EAF";
	size_t len = 4;

	char *result = ft_strnstr(haystack, needle, len);

	if (result)
	{
		printf("Return: %s\n", result);
	} else {
		printf("Return: (null)\n");
	}
	return (0);
}*/