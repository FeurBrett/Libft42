/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:30:42 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/05 15:27:52 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(int nbr)
{	
	if ((nbr >= 'a' && nbr <= 'z') || (nbr >= 'A' && nbr <= 'Z'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int nbr = '5';
// 	int nbr2 = 'a';
// 	int nbr3 = 'H';
//
// 	printf("%d", ft_isalpha(nbr));
// 	printf("%d", ft_isalpha(nbr2));
// 	printf("%d", ft_isalpha(nbr3));
// }