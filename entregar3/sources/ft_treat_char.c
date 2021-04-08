/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:01:11 by jsilva-d          #+#    #+#             */
/*   Updated: 2021/03/26 16:01:57 by jsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_treat_char(char c, t_flags flags)
{
	int char_count;

	char_count = 0;
	if (flags.minus == 1)
		ft_putchar(c);
	char_count = ft_treat_width(flags.width, 1, 0);
	if (flags.minus == 0)
		ft_putchar(c);
	return (char_count + 1);
}
