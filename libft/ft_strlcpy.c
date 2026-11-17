/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 14:37:18 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/14 16:54:17 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
//     char dst[20];
//     size_t ret;

//     // TEST 1: Normal copy
//     printf("=== TEST 1: Normal copy ===\n");
//     ret = ft_strlcpy(dst, "Hello World", sizeof(dst));
//     printf("Result: %s\n", dst);
//     printf("Return: %zu (Expected: 11)\n\n", ret);

//     // TEST 2: Small buffer
//     printf("=== TEST 2: Small buffer ===\n");
//     ret = ft_strlcpy(dst, "Hello World", 6);
//     printf("Result: %s\n", dst);
//     printf("Return: %zu (Expected: 11)\n\n", ret);

//     // TEST 3: Size zero
//     printf("=== TEST 3: Size zero ===\n");
//     strcpy(dst, "Original");
//     ret = ft_strlcpy(dst, "Hello", 0);
//     printf("Result: %s\n", dst);
//     printf("Return: %zu (Expected: 5)\n\n", ret);

//     // TEST 4: Empty source
//     printf("=== TEST 4: Empty source ===\n");
//     ret = ft_strlcpy(dst, "", sizeof(dst));
//     printf("Result: \"%s\"\n", dst);
//     printf("Return: %zu (Expected: 0)\n\n", ret);

//     // TEST 5: Size one
//     printf("=== TEST 5: Size one ===\n");
//     ret = ft_strlcpy(dst, "Hello", 1);
//     printf("Result: \"%s\"\n", dst);
//     printf("Return: %zu (Expected: 5)\n\n", ret);

//     // TEST 6: Empty destination
//     printf("=== TEST 6: Empty destination ===\n");
//     ret = ft_strlcpy(dst, "42 School", sizeof(dst));
//     printf("Result: %s\n", dst);
//     printf("Return: %zu (Expected: 9)\n\n", ret);

//     // TEST 7: Exact buffer size
//     printf("=== TEST 7: Exact buffer size ===\n");
//     ret = ft_strlcpy(dst, "Hello", 6);
//     printf("Result: %s\n", dst);
//     printf("Return: %zu (Expected: 5)\n\n", ret);

//     return (0);
// }
