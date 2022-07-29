/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:21:06 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/11 15:16:54 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*source;

	i = 0;
	str = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		str[i] = source[i];
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	const char	src[5] = "swag";
// 	char dest[50]= "lestofante!!!!";

// 	printf("Before memcpy dest = %s\n", dest);
// 	ft_memcpy(dest, src, 51);
// 	printf("After memcpy dest = %s\n", dest);
// 	return(0);
// }
