/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:03:11 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/16 15:27:34 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	if (n == 0 || dest == src)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}

// int main(void)
// {
//     char arr[] = "ABCDE";

//     printf("Before: %s\n", arr);

//     ft_memmove(arr + 1, arr, 4);

//     printf("After:  %s\n", arr);

//     return (0);
// }
