/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:46:38 by apirovan          #+#    #+#             */
/*   Updated: 2022/08/01 14:51:49 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			j = i;
		i++;
	}
	if (j > 0 || (unsigned char)str[0] == (unsigned char)c)
		return ((char *)&str[j]);
	if (str[i] == 0 && c == 0)
		return ((char *)&str[i]);
	return (NULL);
}

// int	main(void)
// {
// 	const char *s = "abbbbbbbbb";

// 	printf("%s\n", ft_strrchr(s, 'a'));
// }	