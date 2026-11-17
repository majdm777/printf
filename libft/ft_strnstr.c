/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 19:18:43 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/14 16:54:29 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] && big[i + j] == little[j])
		{
			j++;
		}
		if (j == (size_t)ft_strlen(little))
			return ((char *)big + i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// char	*ft_strnstr(const char *big, const char *little, size_t len);

// int	main(void)
// {
// 	char	*big = "Hello World, Hello 42!";
// 	char	*result;

// 	printf("Test 1: Basic search\n");
// 	result = ft_strnstr(big, "World", 22);
// 	printf("Expected: World, Hello 42!, Got: %s\n",
// 		result ? result : "NULL");

// 	printf("\nTest 2: Search at beginning\n");
// 	result = ft_strnstr(big, "Hello", 22);
// 	printf("Expected: Hello World, Hello 42!, Got: %s\n",
// 		result ? result : "NULL");

// 	printf("\nTest 3: Search at end\n");
// 	result = ft_strnstr(big, "42!", 22);
// 	printf("Expected: 42!, Got: %s\n",
// 		result ? result : "NULL");

// 	printf("\nTest 4: Not found\n");
// 	result = ft_strnstr(big, "Bonjour", 22);
// 	printf("Expected: NULL, Got: %s\n",
// 		result ? result : "NULL");

// 	printf("\nTest 5: Length too short\n");
// 	result = ft_strnstr(big, "World", 5);
// 	printf("Expected: NULL, Got: %s\n",
// 		result ? result : "NULL");

// 	printf("\nTest 6: Empty little\n");
// 	result = ft_strnstr(big, "", 0);
// 	printf("Expected: Original string, Got: %s\n",
// 		result ? result : "NULL");

// 	printf("\nTest 7: Empty big\n");
// 	result = ft_strnstr("", "Hello", 10);
// 	printf("Expected: NULL, Got: %s\n",
// 		result ? result : "NULL");

// 	printf("\nTest 8: Exact length\n");
// 	result = ft_strnstr("abcdef", "def", 6);
// 	printf("Expected: def, Got: %s\n",
// 		result ? result : "NULL");

// 	printf("\nTest 9: Match exceint", "def", 5);
// 	printf("Expected: NULL, Got: %s\n",
// 		result ? result : "NULL");

// 	return (0);
// }
