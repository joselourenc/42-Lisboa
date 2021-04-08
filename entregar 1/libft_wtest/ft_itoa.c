/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:27:55 by jsilva-d          #+#    #+#             */
/*   Updated: 2021/04/08 13:54:20 by jsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_itoa_len(int n)
{
	size_t	r;

	if (n == 0)
		return (1);
	r = 0;
	if (n < 0)
		r++;
	while (n)
	{
		n /= 10;
		r++;
	}
	return (r);
}

char	*ft_itoa(int n)
{
	size_t	l;
	size_t	e;
	char	*r;

	l = ft_itoa_len(n);
	if (!(r (char *)malloc(l + 1)))
		return (NULL);
	r[l] = '\0';
	if (n < 0)
	{
		r[0] = '-';
		e = 1;
	}
	else
		e = 0;
	while (l-- > e)
	{
		if (n < 0)
			r[l] = '0' + n % 10 * -1;
		else
			r[l] = '0' + n % 10 * 1;
		n /= 10;
	}
	return (r);
}
