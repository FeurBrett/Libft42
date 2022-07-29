/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:10:20 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/27 14:35:07 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*source;

	i = 0;
	str = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (!src && !dest)
		return (NULL);
	if (src < dest)
	{
		while (n > 0)
		{
			n--;
			str[n] = source[n];
		}
	}
	if (src > dest)
	{
		ft_memcpy(dest, src, n);
	}
	return (str);
}

// int	main(void)
// {
// 	const char	src[50] = "swagboybla";
// 	char dest[50]= "123456789123456789";
// 	char dest2[50]="123456789123456789";

// 	printf("Before memmove dest = %s\n", dest);
// 	ft_memmove(dest, src, 10);
// 	printf("After ft_memmove dest = %s\n", dest);
// 	memmove(dest2, src, 10);
// 	printf("After memmove dest = %s\n", dest2);
// 	return(0);
// }
