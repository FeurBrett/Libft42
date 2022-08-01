/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:36:30 by apirovan          #+#    #+#             */
/*   Updated: 2022/08/01 09:38:19 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char	*big, const char	*small, size_t	len )
{
	size_t	i;
	size_t	j;
	char	*big_str;

	i = 0;
	big_str = (char *)big;
	if (ft_strlen(small) == 0)
		return (big_str);
	while (big_str[i] && i < len)
	{
		j = 0;
		while (small[j] == big_str[i + j] && i + j < len)
		{
			if (small[j + 1] == '\0')
				return (&big_str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*a = "slt les bg";
// 	const char	*b = "yo";

// 	printf("%s\n", ft_strnstr(a, b, 10));
// }