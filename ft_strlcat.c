/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymun <mraymun@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 23:56:27 by mraymun           #+#    #+#             */
/*   Updated: 2020/10/31 12:23:57 by mraymun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_min(int a, int b)
{
	if (a <= b)
		return (a);
	return (b);
}

int			ft_strlcat(char *dst, char *src, int dstsize)
{
	int		dst_len;
	int		result_len;

	dst_len = ft_strlen(dst);
	result_len = ft_min(dstsize, dst_len) + ft_strlen(src);
	if (!(dstsize <= dst_len))
	{
		dst += dst_len;
		dstsize -= dst_len;
		while (*src && dstsize-- > 1)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (result_len);
}
