/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:41:44 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/05 15:27:42 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isascii(int nbr)
{
	if ((nbr >= 0) && (nbr <= 127))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int nbr = '5';
// 	int nbr2 = 'a';
// 	int nbr3 = '/';
//
// 	printf("%d", ft_isascii(nbr));
// 	printf("%d", ft_isascii(nbr2));
// 	printf("%d", ft_isascii(nbr3));
// }