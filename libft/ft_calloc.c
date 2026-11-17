/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:30:50 by username          #+#    #+#             */
/*   Updated: 2026/11/15 14:32:10 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (size == 0 | nmemb == 0)
		return (malloc(1));
	if (size > __SIZE_MAX__ / nmemb)
		return ((void *)0);
	arr = malloc(size * nmemb);
	if (!arr)
		return ((void *)0);
	ft_bzero(arr, (size * nmemb));
	return (arr);
}
