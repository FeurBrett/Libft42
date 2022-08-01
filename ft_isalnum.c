/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:53:57 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/11 13:20:27 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isalnum(int nbr)
{
	if ((ft_isalpha(nbr) == 1) || (ft_isdigit(nbr) == 1))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int nbr = '5';
// 	int nbr2 = 'a';
// 	int nbr3 = '/';

// 	printf("%d", ft_isalnum(nbr));
// 	printf("%d", ft_isalnum(nbr2));
// 	printf("%d", ft_isalnum(nbr3));
// }