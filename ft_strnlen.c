/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymun <mraymun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:23:52 by mraymun           #+#    #+#             */
/*   Updated: 2020/10/31 18:24:18 by mraymun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnlen(char *str, int maxlen)
{
	int		len;

	len = 0;
	while (len < maxlen)
	{
		if (!*str)
			break ;
		len++;
		str++;
	}
	return (len);
}
