/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:01:48 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/27 14:33:34 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	long int	entier;
	int			neg;

	i = 0;
	neg = 1;
	entier = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= 47 && str[i] < 58)
	{
		entier = (entier * 10) + (str[i] - 48);
		i++;
		if (entier * neg < -2147483648)
			return (0);
		if (entier * neg > 2147483647)
			return (-1);
	}
	return (entier * neg);
}
