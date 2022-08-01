/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:34:36 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/04 15:33:42 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_isdigit(int nbr)
{
	if (nbr <= 57 && nbr >= 48)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int nbr = 5;

	printf("%d", ft_isdigit(nbr));
}*/