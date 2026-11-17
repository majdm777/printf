/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:20:14 by username          #+#    #+#             */
/*   Updated: 2026/11/14 16:52:01 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char	*ft_strcat(char *dest, char src)
{
	int	len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	dest[len] = src;
	dest[len + 1] = '\0';
	return (dest);
}

static char	*ft_putnbr(int nb, char *nbr)
{
	long	n;

	n = (long)nb;
	if (n < 0)
	{
		nbr = ft_strcat(nbr, '-');
		n = n * (-1);
	}
	if (n < 10)
		nbr = ft_strcat(nbr, n + '0');
	else
	{
		nbr = ft_putnbr(n / 10, nbr);
		nbr = ft_strcat(nbr, n % 10 + '0');
	}
	return (nbr);
}

static int	get_size(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		size;

	size = get_size(n) + 1;
	if (n < 0)
		size++;
	number = (char *)malloc(size);
	if (!number)
		return (NULL);
	number[0] = '\0';
	ft_putnbr(n, number);
	return (number);
}

// int main()
// {

// 	printf("%s",ft_itoa(-1));
// }
