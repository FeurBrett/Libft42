/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:48:43 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/13 11:29:49 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;

	i = 0;
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (size <= 0 || size < lendest)
		return (lensrc + size);
	while ((src[i] != '\0') && i + 1 < size - lendest)
	{
		dest[lendest + i] = src [i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}

// int	main(void)
// {
// 	char	a[100] = "salut ca";
// 	char	b[] = "farte les bg?";
// 	size_t n = 13;

//  printf("%lu\n", ft_strlcat(a, b, n));
//  printf("%s\n", a);
// 	printf("%lu\n", strlcat(a, b, n));
// 	printf("%s\n", a);
// 	return (0);
// }