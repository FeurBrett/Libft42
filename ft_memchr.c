/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:21:01 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/27 14:36:41 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str2;
	unsigned char	c2;

	str2 = (unsigned char *)s;
	i = 0;
	c2 = (unsigned char) c;
	while (i < n)
	{
		if (str2[i] != c2)
			i++;
		else if (str2[i] == c2)
			return (&str2[i]);
	}
	return (NULL);
}

// int	main(void)
// {
// 	const void *s = "salut la mif";

// 	printf("%s\n", ft_memchr(s, 'i', 12));
// }