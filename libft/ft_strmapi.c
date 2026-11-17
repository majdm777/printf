/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 15:08:27 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/15 19:41:59 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str || !f)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include "libft.h"

// // Test 1: Convert lowercase to uppercase
// char	ft_upper(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// // Test 2: Convert uppercase to lowercase
// char	ft_lower(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'A' && c <= 'Z')
// 		return (c + 32);
// 	return (c);
// }

// // Test 3: Add index to character
// char	ft_index(unsigned int i, char c)
// {
// 	return (c + i);
// }

// // Test 4: Replace every character with *
// char	ft_star(unsigned int i, char c)
// {
// 	(void)i;
// 	(void)c;
// 	return ('*');
// }

// // Test 5: Replace only characters at even indexes
// char	ft_even(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return ('X');
// 	return (c);
// }

// // Test 6: Replace only characters at odd indexes
// char	ft_odd(unsigned int i, char c)
// {
// 	if (i % 2 != 0)
// 		return ('X');
// 	return (c);
// }

// // Test 7: Return characters unchanged
// char	ft_same(unsigned int i, char c)
// {
// 	(void)i;
// 	return (c);
// }

// // Test 8: Return null character
// char	ft_null(unsigned int i, char c)
// {
// 	(void)i;
// 	(void)c;
// 	return ('\0');
// }

// void	test(char *name, char *str, char (*f)(unsigned int, char))
// {
// 	char	*result;

// 	printf("\n--- %s ---\n", name);
// 	printf("Input:  \"%s\"\n", str);
// 	result = ft_strmapi(str, f);
// 	if (!result)
// 	{
// 		printf("Result: NULL\n");
// 		return ;
// 	}
// 	printf("Result: \"%s\"\n", result);
// 	free(result);
// }

// int	main(void)
// {
// 	char	*empty = "";

// 	test("Uppercase", "hello world", ft_upper);
// 	test("Lowercase", "HELLO WORLD", ft_lower);
// 	test("Index test", "abcd", ft_index);
// 	test("Replace all", "libft42", ft_star);
// 	test("Even indexes", "abcdef", ft_even);
// 	test("Odd indexes", "abcdef", ft_odd);
// 	test("Unchanged string", "Hello 42!", ft_same);
// 	test("Empty string", empty, ft_upper);
// 	test("One character", "a", ft_upper);
// 	test("Spaces", "   ", ft_star);
// 	test("Numbers", "123456789", ft_index);
// 	test("Special characters", "!@#$%^&*", ft_same);
// 	test("Null character return", "hello", ft_null);

// 	printf("\n--- NULL INPUT ---\n");
// 	if (ft_strmapi(NULL, ft_upper) == NULL)
// 		printf("PASS: returned NULL\n");
// 	else
// 		printf("FAIL: expected NULL\n");

// 	return (0);
// }
