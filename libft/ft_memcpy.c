/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:03:45 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/14 16:56:58 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

// #include <stdio.h>
// int main(void)
// {

//     char src_char[] = "Hello";
//     char dest_char[6] = {0};

//     ft_memcpy(dest_char, src_char, 3);
//     printf("\nCharacter array: %s\n", dest_char);

//     return (0);
// }
