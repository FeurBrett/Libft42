/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apirovan <apirovan@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:11:19 by apirovan          #+#    #+#             */
/*   Updated: 2022/07/27 14:35:39 by apirovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}

// int main (void)
// {
// 	ft_putstr_fd("yolo", 1);
// 	write(1,"\n",1);
// 	ft_putstr_fd("blabla", 2);
// 	write(1,"\n",1);
// 	ft_putstr_fd("ffff", 0);
// 	write(1,"\n",1);
// 	ft_putstr_fd("wakeuteu", 124);
// }