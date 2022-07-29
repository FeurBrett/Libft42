/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:55:59 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/20 17:12:09 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//  #include <stdio.h>
//  #include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
	}
	return (0);
}

// int	main(void)
// {
// 	const char a[] = "hello";
// 	const char b[] = "Hello";

// 	printf("%d", ft_strncmp(a, b, 5));
// 	printf("\n%d", strncmp(a, b, 5));
// }