/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-24 13:51:52 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-24 13:51:52 by rogarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;

	if (str == 0)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
        sign = -1;
    if ((str[i] == '-') || (str[i] == '+'))
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result *10 + (str[i] - 48);
        i++;
    }
	return (sign * result);
}
/*int main ()
{
    const char *str = 0;
    printf("return: %d\n", ft_atoi(str));
}*/