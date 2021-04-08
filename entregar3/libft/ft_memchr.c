/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:34:52 by jsilva-d          #+#    #+#             */
/*   Updated: 2021/03/26 16:56:22 by jsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			cur;

	str = (unsigned char *)s;
	cur = 0;
	while (cur < n)
	{
		if (str[cur] == (unsigned char)c)
			return ((void *)&str[cur]);
		cur++;
	}
	return (NULL);
}
