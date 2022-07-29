/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:46:38 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/29 13:49:32 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	if (c == '\0')
		return ((char *)&str[ft_strlen(str)]);
	while (str[i])
	{
		if (str[i] == c)
			j = i;
		i++;
	}
	if (j != -1)
		return ((char *)&str[j]);
	return (NULL);
}

// int	main(void)
// {
// 	const char *s = "abbbbbbbbb";

// 	printf("%s\n", ft_strrchr(s, 'a'));
// }	