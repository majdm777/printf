/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extractprecision.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 17:44:04 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/18 14:25:51 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_extractprecision(const char *s, int *index)
{
	unsigned int	preci;
	int				i;

	i = *index + 1;
	preci = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		preci = preci * 10 + (s[i] - '0');
		i++;
	}
	*index = i;
	return (preci);
}
