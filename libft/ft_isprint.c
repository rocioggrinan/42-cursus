/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:32:14 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:32:14 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int a)
{
	if (!((a <= 126 && a >= 32)))
		return (0);
	return (1);
}
