/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:30:14 by apirovan          #+#    #+#             */
/*   Updated: 2022/08/01 14:40:25 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = -1;
	while (str[++i] != (char)c)
	{
		if (str[i] == 0)
			return (NULL);
	}
	return ((char *)&str[i]);
}

// int	main(void)
// {
// 	const char *s = "salut la mif";
//
// 	printf("%s\n", ft_strchr(s, 't'));
// }	