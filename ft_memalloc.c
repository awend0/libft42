/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymun <mraymun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 23:54:31 by mraymun           #+#    #+#             */
/*   Updated: 2020/10/31 15:16:40 by mraymun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(int size)
{
	void	*ptr;

	if ((ptr = malloc(size)))
		ft_bzero(ptr, size);
	return (ptr);
}
