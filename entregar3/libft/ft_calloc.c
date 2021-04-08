/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:24:42 by jsilva-d          #+#    #+#             */
/*   Updated: 2021/03/16 17:13:36 by jsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!(ptr = (char*)malloc(count * size)))
		return (NULL);
	while (i < (count * size))
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
