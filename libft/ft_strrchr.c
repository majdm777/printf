/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:20:15 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/14 16:54:33 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*var;

	i = 0;
	var = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			var = (char *)s + i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (var);
}

// #include <stdio.h>
// int main(void)
// {
//     char str[] = "Hello World";
//     char *result;

//     // TEST 1: Character exists
//     printf("=== TEST 1: Character exists ===\n");
//     result = ft_strrchr(str, 'o');
//     if (result)
//         printf("Result: %s | Character: %c\n", result, *result);
//     else
//         printf("Result: NULL\n");
//     printf("Expected: orld\n\n");

//     // TEST 2: Character appears multiple times
//     printf("=== TEST 2: Repeated character ===\n");
//     result = ft_strrchr(str, 'l');
//     if (result)
//         printf("Result: %s | Character: %c\n", result, *result);
//     else
//         printf("Result: NULL\n");
//     printf("Expected: ld\n\n");

//     // TEST 3: Character does not exist
//     printf("=== TEST 3: Character missing ===\n");
//     result = ft_strrchr(str, 'z');
//     if (result)
//         printf("Result: %s\n", result);
//     else
//         printf("Result: NULL\n");
//     printf("Expected: NULL\n\n");

//     // TEST 4: Search for null terminator
//     printf("=== TEST 4: Null terminator ===\n");
//     result = ft_strrchr(str, '\0');
//     if (result)
//         printf("Found null terminator: %d\n", *result);
//     else
//         printf("Result: NULL\n");
//     printf("Expected: Found null terminator: 0\n\n");

//     // TEST 5: Empty string
//     printf("=== TEST 5: Empty string ===\n");
//     result = ft_strrchr("", 'a');
//     if (result)
//         printf("Result: %s\n", result);
//     else
//         printf("Result: NULL\n");
//     printf("Expected: NULL\n\n");

//     // TEST 6: Search for first character
//     printf("=== TEST 6: First character ===\n");
//     result = ft_strrchr(str, 'H');
//     if (result)
//         printf("Result: %s\n", result);
//     else
//         printf("Result: NULL\n");
//     printf("Expected: Hello World\n");

//     return (0);
// }
