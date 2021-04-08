/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:23:47 by jsilva-d          #+#    #+#             */
/*   Updated: 2021/03/16 17:09:31 by jsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	result;

	i = 0;
	while (str[0] == '\t' || str[0] == '\n' || str[0] == '\v' ||
			str[0] == '\f' || str[0] == ' ' || str[0] == '\r')
		str++;
	result = 0;
	sign = (str[0] == '-' ? -1 : 1);
	str = (str[0] == '-' || str[0] == '+') ? str + 1 : str;
	while (str[0] == '0')
		str++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
		result = result * 10 + (str[i++] - '0');
	if (i > 19 || result >= 9223372036854775808ULL)
		return (sign == 1 ? -1 : 0);
	return (result * sign);
}
