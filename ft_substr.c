/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:03:58 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/25 18:17:28 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_malloc_size(char *str, size_t start, size_t len, size_t len2)
{
	if (start > len2)
		return (ft_calloc(1, sizeof(char)));
	if (len > (len2 - start))
		str = malloc(sizeof(*str) * (len2 - start + 1));
	else if (len <= (len2 - start))
		str = malloc(sizeof(*str) * len + 1);
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	len2;
	size_t	j;

	if (!s)
		return (NULL);
	str = NULL;
	i = 0;
	j = 0;
	len2 = ft_strlen(s);
	str = ft_malloc_size(str, (size_t) start, len, len2);
	if (!str)
		return (NULL);
	while (s[i] && start < len2)
	{
		while (i == start && j < len && s[i + j])
		{
			str[j] = s[i + j];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
