/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymun <mraymun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:41:31 by mraymun           #+#    #+#             */
/*   Updated: 2020/10/31 18:53:01 by mraymun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strnstr(const char *haystack, const char *needle, int len)
{
	char	*h;
	int		needle_len;
	int		i;
	int		j;

	h = (char *)haystack;
	if (!(needle_len = ft_strlen(needle)))
		return (h);
	if (ft_strlen(haystack) < len || needle_len < len)
		return (0);
	
}