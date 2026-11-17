/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:59:07 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/14 16:54:04 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;

	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <stdint.h>
// #include <limits.h>

// int main(void)
// {
//     char    *str;
//     char    *dup;

//     // Test 1: Normal string
//     printf("TEST 1: Normal string\n");
//     str = "Hello, World!";
//     dup = ft_strdup(str);

//     if (!dup)
//         printf("Allocation failed\n");
//     else
//     {
//         printf("Original: %s\n", str);
//         printf("Duplicate: %s\n", dup);
//         printf("Comparison: %d\n", strcmp(str, dup));
//         free(dup);
//     }

//     // Test 2: Empty string
//     printf("\nTEST 2: Empty string\n");
//     str = "";
//     dup = ft_strdup(str);

//     if (!dup)
//         printf("Allocation failed\n");
//     else
//     {
//         printf("Duplicate: \"%s\"\n", dup);
//         printf("Length: %zu\n", strlen(dup));
//         free(dup);
//     }

//     // Test 3: Long string
//     printf("\nTEST 3: Long string\n");
//     str = "This is a very long string to test ft_strdup.";
//     dup = ft_strdup(str);

//     if (!dup)
//         printf("Allocation failed\n");
//     else
//     {
//         printf("Duplicate: %s\n", dup);
//         free(dup);
//     }

//     // Test 4: Check independent memory
//     printf("\nTEST 4: Independent memory\n");
//     str = "Hello";
//     dup = ft_strdup(str);

//     if (!dup)
//         printf("Allocation failed\n");
//     else
//     {
//         printf("Same address? %s\n",
//             (str == dup) ? "YES" : "NO");

//         dup[0] = 'J';

//         printf("Original: %s\n", str);
//         printf("Duplicate: %s\n", dup);

//         free(dup);
//     }

//     // Test 5: Compare with real strdup
//     printf("\nTEST 5: Compare with strdup\n");
//     str = "Testing ft_strdup!";
//     dup = ft_strdup(str);

//     if (!dup)
//         printf("Allocation failed\n");
//     else
//     {
//         printf("Result: %s\n",
//             strcmp(str, dup) == 0 ? "PASS" : "FAIL");
//         free(dup);
//     }

//     return (0);
// }
