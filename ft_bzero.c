/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:11:41 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/11 14:29:12 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*pointeur;

	i = 0;
	pointeur = (unsigned char *)s;
	while (i < n)
	{
		pointeur[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char	str[] = "bonjour les canares";

// 	printf("\nBefore bzero(): %s\n", str);
// 	ft_bzero(str, 1);
// 	printf("\nAfter bzero(): %s\n", str);
// 	return (0);
// }