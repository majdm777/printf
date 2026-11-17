/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:43:09 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/14 16:52:52 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     char str[] = "Hello World";
//     char *result;

//     // TEST 1: Character exists
//     printf("=== TEST 1: Character exists ===\n");
//     result = ft_memchr(str, 'W', 11);
//     if (result)
//         printf("Result: %s\n", result);
//     else
//         printf("Result: NULL\n");
//     printf("Expected: World\n\n");

//     // TEST 2: Repeated character (first occurrence)
//     printf("=== TEST 2: Repeated character ===\n");
//     result = ft_memchr(str, 'l', 11);
//     if (result)
//         printf("Result: %s\n", result);
//     else
//         printf("Result: NULL\n");
//     printf("Expected: llo World\n\n");

//     // TEST 3: Character does not exist
//     printf("=== TEST 3: Character missing ===\n");
//     result = ft_memchr(str, 'z', 11);
//     if (result)
//         printf("Result: %s\n", result);
//     else
//         printf("Result: NULL\n");
//     printf("Expected: NULL\n\n");

//     // TEST 4: Character outside search limit
//     printf("=== TEST 4: Outside search limit ===\n");
//     result = ft_memchr(str, 'W', 5);
//     if (result)
//         printf("Result: %s\n", result);
//     else
//         printf("Result: NULL\n");
//     printf("Expected: NULL\n\n");

//     // TEST 5: Search for null terminator
//     printf("=== TEST 5: Null terminator ===\n");
//     result = ft_memchr(str, '\0', 12);
//     if (result)
//         printf("Found null terminator: %d\n", *result);
//     else
//         printf("Result: NULL\n");
//     printf("Expected: Found null terminator: 0\n\n");

//     // TEST 6: Size is zero
//     printf("=== TEST 6: Size zero ===\n");
//     result = ft_memchr(str, 'H', 0);
//     if (result)
//         printf("Result: %s\n", result);
//     else
//         printf("Result: NULL\n");
//     printf("Expected: NULL\n\n");

//     // TEST 7: Character at last searched position
//     printf("=== TEST 7: Last position ===\n");
//     result = ft_memchr(str, 'o', 5);
//     if (result)
//         printf("Result: %s\n", result);
//     else
//         printf("Result: NULL\n");
//     printf("Expected: o world\n\n");

//     return (0);
// }
