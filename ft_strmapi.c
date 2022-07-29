/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:06:17 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/29 14:30:20 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	if (s && f)
	{
		while (s[i])
		{
			str[i] = f(i, s[i]);
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}

// char	mapi(unsigned int i, char c)
// {
// 	i = 0;
// 	while (i == 0)
// 	{
// 		if (c >= 'a' && c <= 'z')
// 			return (c - 32);
// 		else if (c >= 'A' && c <= 'Z')
// 			return (c + 32);
// 		else
// 			return (c);
// 	}
// 	return (c);
// }

// int main ()
// {
// 	printf(" |%s| ", ft_strmapi("qui dort dine", &mapi));
// 	printf(" |%s| ", ft_strmapi("", &mapi));
// 	printf(" |%s| ", ft_strmapi("QUI VOLE UNE POULE, DORMIRA BIEN", &mapi));
// 	printf(" |%s| ", ft_strmapi("	ce TEST est UN peu STUPIDE ??", &mapi));
// }