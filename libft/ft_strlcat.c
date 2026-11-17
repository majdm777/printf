/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 14:10:13 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/14 16:54:14 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			i;
	unsigned int	dstlen;

	dstlen = ft_strlen(dest);
	i = 0;
	if (size <= dstlen)
		return (size + ft_strlen(src));
	while ((i < size - dstlen - 1) && src[i] != '\0')
	{
		dest[dstlen + i] = src[i];
		i++;
	}
	dest[dstlen + i] = '\0';
	return (dstlen + ft_strlen(src));
}

// int main(void)
// {
//     char dst1[20] = "Hello ";
//     char dst2[20] = "Hello ";
//     char dst3[20] = "Hello ";
//     char dst4[20] = "Hello ";

//     size_t ret1;

//     size_t ret3;

//     printf("=== TEST 1: Normal concatenation ===\n");
//     ret1 = ft_strlcat(dst1, "World", sizeof(dst1));

//     printf("Your:      %s | Return: %zu\n", dst1, ret1);

//     printf("=== TEST 2: Limited buffer ===\n");
//     ret3 = ft_strlcat(dst3, "World", 10);

//     printf("Your:      %s | Return: %zu\n", dst3, ret3);

//     printf("=== TEST 3: Size is zero ===\n");
//     char dst5[20] = "Hello ";

//     ret1 = ft_strlcat(dst5, "World", 0);

//     printf("Your:      %s | Return: %zu\n", dst5, ret1);

//     printf("=== TEST 4: No space for concatenation ===\n");
//     char dst7[10] = "Hello";

//     ret1 = ft_strlcat(dst7, "World", 5);

//     printf("Your:      %s | Return: %zu\n", dst7, ret1);

//     printf("=== TEST 5: Empty destination ===\n");
//     char dst9[20] = "";

//     ret1 = ft_strlcat(dst9, "World", sizeof(dst9));

//     printf("Your:      %s | Return: %zu\n", dst9, ret1);

//     return (0);
// }
