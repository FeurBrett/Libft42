/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:15:37 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/27 14:35:17 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//fills the first n bytes of the memory area pointed by s with c
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pointeur;

	i = 0;
	pointeur = (unsigned char *)s;
	while (i < n)
	{
		pointeur[i] = c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	str[] = "bonjour les canares";
// 	int		c = '.';

// 	printf("\nBefore memset(): %s\n", str);
// 	ft_memset(str, c, 0);
// 	printf("\nAfter memset(): %s\n", str);
// 	return (0);
// }