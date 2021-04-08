/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:36:43 by jsilva-d          #+#    #+#             */
/*   Updated: 2021/03/16 15:49:34 by jsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*csrc;
	char	*cdst;
	size_t	i;

	if (src == dst)
		return (dst);
	csrc = (char *)src;
	cdst = (char *)dst;
	if (src < dst)
	{
		i = len;
		while (i-- > 0)
			cdst[i] = csrc[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (dst);
}
