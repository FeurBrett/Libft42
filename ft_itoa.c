/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:33:37 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/29 14:21:02 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	long long int	nb;
	char			*itoa;

	nb = n;
	len = ft_intlen(nb);
	itoa = malloc(sizeof(*itoa) * len + 1);
	if (!itoa)
		return (NULL);
	itoa[len] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		itoa[0] = '-';
	}
	if (nb == 0)
		itoa[0] = '0';
	while (nb > 0)
	{
		len--;
		itoa[len] = (nb % 10) + 48;
		nb /= 10;
	}
	return (itoa);
}
