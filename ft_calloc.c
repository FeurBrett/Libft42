/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:07:43 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/29 13:50:27 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//allocates memory and initializes all bits to zero
void	*ft_calloc(size_t nelem, size_t size)
{
	void	*tab;

	tab = malloc(size * nelem);
	if (!tab)
		return (NULL);
	ft_bzero(tab, nelem * size);
	return (tab);
}
