/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:35:02 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:35:02 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main()
{
	const char    s1[] = "aaaa12z4";
	const char    s2[] = "aaaa92h4";
	size_t  n;

	n = 5;
	printf("Result: %d\n", ft_strncmp(s1, s2, n));
	printf("Result2: %d\n", strncmp(s1, s2, n));
	return (0);
}*/