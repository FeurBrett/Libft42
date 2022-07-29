/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:30:14 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/27 14:50:51 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*str2;

	i = 0;
	str2 = (char *)str;
	while (str2[i])
	{
		if (str2[i] == c)
			return (&(str2[i]));
		i++;
	}
	if (c == '\0')
		return (&str2[i]);
	return (NULL);
}

// int	main(void)
// {
// 	const char *s = "salut la mif";
//
// 	printf("%s\n", ft_strchr(s, '\0'));
// }	