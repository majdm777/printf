/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 18:16:57 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/14 16:54:38 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (unsigned int)ft_strlen(s) - start)
		len = (unsigned int)ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	if (!substr)
		return (NULL);
	while (i < len && s[start + i])
	{
		substr[i] = (char)s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
//     char *str;
//     char *sub;

//     // Test 1: Normal substring
//     printf("TEST 1: Normal substring\n");
//     str = "Hello World!";
//     sub = ft_substr("majd", 7, 3);

//     if (!sub)
//         printf("Allocation failed\n");
//     else
//     {
//         //printf("Expected: World\n");
//         printf("Got:      %s |\n", sub);
//         free(sub);
//     }

//     // Test 2: Start at beginning
//     printf("\nTEST 2: Start at beginning\n");
//     sub = ft_substr("Hello", 0, 3);

//     if (!sub)
//         printf("Allocation failed\n");
//     else
//     {
//         printf("Expected: Hel\n");
//         printf("Got:      %s\n", sub);
//         free(sub);
//     }

//     // Test 3: Length bigger than remaining string
//     printf("\nTEST 3: Length bigger than string\n");
//     sub = ft_substr("Hello", 2, 20);

//     if (!sub)
//         printf("Allocation failed\n");
//     else
//     {
//         printf("Expected: llo\n");
//         printf("Got:      %s\n", sub);
//         free(sub);
//     }

//     // Test 4: Start beyond string length
//     printf("\nTEST 4: Start beyond string\n");
//     sub = ft_substr("Hello", 10, 3);

//     if (!sub)
//         printf("Allocation failed\n");
//     else
//     {
//         printf("Expected: \"\"\n");
//         printf("Got:      \"%s\"\n", sub);
//         free(sub);
//     }

//     // Test 5: Zero length
//     printf("\nTEST 5: Zero length\n");
//     sub = ft_substr("Hello", 2, 0);

//     if (!sub)
//         printf("Allocation failed\n");
//     else
//     {
//         printf("Expected: \"\"\n");
//         printf("Got:      \"%s\"\n", sub);
//         free(sub);
//     }

//     // Test 6: Empty string
//     printf("\nTEST 6: Empty string\n");
//     sub = ft_substr("", 0, 5);

//     if (!sub)
//         printf("Allocation failed\n");
//     else
//     {
//         printf("Expected: \"\"\n");
//         printf("Got:      \"%s\"\n", sub);
//         free(sub);
//     }

//     // Test 7: Single character
//     printf("\nTEST 7: Single character\n");
//     sub = ft_substr("Hello", 1, 1);

//     if (!sub)
//         printf("Allocation failed\n");
//     else
//     {
//         printf("Expected: e\n");
//         printf("Got:      %s\n", sub);
//         free(sub);
//     }

//     // Test 8: Entire string
//     printf("\nTEST 8: Entire string\n");
//     sub = ft_substr("Hello", 0, 5);

//     if (!sub)
//         printf("Allocation failed\n");
//     else
//     {
//         printf("Expected: Hello\n");
//         printf("Got:      %s\n", sub);
//         free(sub);
//     }

//     // Test 9: NULL terminator
//     printf("\nTEST 9: Check null terminator\n");
//     sub = ft_substr("Hello", 1, 3);

//     if (!sub)
//         printf("Allocation failed\n");
//     else
//     {
//         printf("Last byte: %d\n", sub[3]);
//         printf("Expected: 0\n");
//         free(sub);
//     }

//     return (0);
// }
