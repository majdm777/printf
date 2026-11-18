/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extractwidth.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 17:24:23 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/18 14:25:37 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_extractwidth(const char *s, int *index)
{
	unsigned int	width;
	int				i;

	width = 0;
	i = *index;
	while (s[i] >= '0' && s[i] <= '9')
	{
		width = width * 10 + (s[i] - '0');
		i++;
	}
	*index = i;
	return (width);
}
