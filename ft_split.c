/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:26:28 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/29 17:22:39 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_words(char *str, char sep)
{
	int	size;

	size = 0;
	while (str[size] && str[size] != sep)
		size++;
	return (size);
}

static int	ft_nb_words(char *str, char sep)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (*str)
	{
		while (*str && str[i] == sep)
			str++;
		i = ft_size_words(str, sep);
		str += i;
		if (i)
			nb ++;
	}
	return (nb);
}

static char	**ft_free(char **str, int size)
{
	while (size >= 0)
	{
		free(str[size]);
		size--;
	}
	free(str);
	return (NULL);
}

static char	*ft_malloc_strcpy(char *src, int n)
{
	char	*dest;

	dest = malloc(sizeof(char) * n + 1);
	if (!dest)
		return (NULL);
	dest[n] = '\0';
	n--;
	while (n >= 0)
	{
		dest[n] = src[n];
		n--;
	}
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**final_tab;
	int		size;
	int		i;
	int		n;

	if (!s)
		return (NULL);
	i = 0;
	size = ft_nb_words((char *)s, c);
	final_tab = malloc(sizeof(char *) * size + 1);
	if (!final_tab)
		return (NULL);
	while (i < size)
	{
		while (*s && *s == c)
			s++;
		n = ft_size_words((char *)s, c);
		final_tab[i] = ft_malloc_strcpy((char *)s, n);
		if (!final_tab[i])
			return (ft_free(final_tab, i - 1));
		s += n;
		i++;
	}
	final_tab[size] = 0;
	return (final_tab);
}
