/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extractflags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:58:11 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/18 14:25:57 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	flag_cleaner(int flg)
{
	if (flg & 1)
		flg &= ~8;
	if (flg & 2)
		flg &= ~4;

	return (flg);
}
int	ft_extractflags(const char *s, int *index)
{
	int	flg;
	int	i;

	flg = 0;
	i = *index;
	while (isflag(s[i]))
	{
		if (s[i] == '+')
			flg |= 1;
		else if (s[i] == '-')
			flg |= 2;
		else if (s[i] == '0')
			flg |= 4;
		else if (s[i] == ' ')
			flg |= 8;
		else // #
			flg |= 16;
		i++;
	}
	*index = i;
	return (flag_cleaner(flg));
}
