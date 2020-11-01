/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymun <mraymun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 23:54:31 by mraymun           #+#    #+#             */
/*   Updated: 2020/11/01 20:18:34 by mraymun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(int size)
{
	void	*ptr;

	if ((ptr = malloc(size)))
		ft_bzero(ptr, size);
	else
		return (0);
	return (ptr);
}
