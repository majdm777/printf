/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 19:03:26 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/14 16:52:56 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((((unsigned char *)s1)[i]) != (((unsigned char *)s2)[i]))
			return ((((unsigned char *)s1)[i]) - (((unsigned char *)s2)[i]));
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     // TEST 1: Identical strings
//     printf("=== TEST 1: Identical strings ===\n");
//     printf("Result: %d\n", ft_memcmp("Hello", "Hello", 5));
//     printf("Expected: 0\n\n");

//     // TEST 2: Different characters
//     printf("=== TEST 2: Different characters ===\n");
//     printf("Result: %d\n", ft_memcmp("Hello", "Hallo", 5));
//     printf("Expected: positive value\n\n");

//     // TEST 3: First string is smaller
//     printf("=== TEST 3: First string is smaller ===\n");
//     printf("Result: %d\n", ft_memcmp("Apple", "Banana", 5));
//     printf("Expected: negative value\n\n");

//     // TEST 4: Difference outside search limit
//     printf("=== TEST 4: Difference outside limit ===\n");
//     printf("Result: %d\n", ft_memcmp("Hello", "Hellx", 4));
//     printf("Expected: 0\n\n");

//     // TEST 5: Size is zero
//     printf("=== TEST 5: Size zero ===\n");
//     printf("Result: %d\n", ft_memcmp("Hello", "World", 0));
//     printf("Expected: 0\n\n");

//     // TEST 6: Difference at last position
//     printf("=== TEST 6: Difference at last position ===\n");
//     printf("Result: %d\n", ft_memcmp("HellA", "HellB", 5));
//     printf("Expected: negative value\n\n");

//     // TEST 7: Null bytes
//     printf("=== TEST 7: Null bytes ===\n");
//     char s1[] = {'A', '\0', 'B'};
//     char s2[] = {'A', '\0', 'C'};

//     printf("Result (n = 2): %d\n", ft_memcmp(s1, s2, 2));
//     printf("Expected: 0\n");

//     printf("Result (n = 3): %d\n", ft_memcmp(s1, s2, 3));
//     printf("Expected: negative value\n\n");

//     // TEST 8: Unsigned char comparison
//     printf("=== TEST 8: Unsigned char comparison ===\n");
//     unsigned char a[] = {200};
//     unsigned char b[] = {100};

//     printf("Result: %d\n", ft_memcmp(a, b, 1));
//     printf("Expected: positive value\n");

//     return (0);
// }
