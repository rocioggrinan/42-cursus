/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:34:45 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:34:45 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *a)
{
	int	count;

	count = 0;
	while (a[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*int main (void)
{
	char *a;

	a = "holaaaa";
	printf("return: %d\n", (ft_strlen(a)));
}*/