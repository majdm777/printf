/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 12:58:42 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/14 16:54:35 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// #include <stdio.h>

static int	isset(char *set, char c)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;
	int		start;
	char	*str;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && isset((char *)set, s1[start]))
		start++;
	if (start == ft_strlen(s1))
		return (ft_strdup(""));
	while (s1[end] && isset((char *)set, s1[end]))
		end--;
	str = (char *)malloc((end - start) + 2);
	if (!str)
		return (str);
	while (i + start <= end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
//     char    *result;

//     // Test 1
//     result = ft_strtrim("xxHello Worldxx", "x");
//     printf("Test 1:\nExpected: 'Hello World
//		'\nYour output: '%s'\n\n", result);
//     free(result);

//     // Test 2
//     result = ft_strtrim("abcHelloabc", "abc");
//     printf("Test 2:\nExpected: 'Hello'
//		\nYour output: '%s'\n\n", result);
//     free(result);

//     // Test 3
//     result = ft_strtrim("", "abc");
//     printf("Test 3:\nExpected: ''\nYour
//		output: '%s'\n\n", result);
//     free(result);

//     // Test 4
//     result = ft_strtrim("Hello", "");
//     printf("Test 4:\nExpected: 'Hello'
//		\nYour output: '%s'\n\n", result);
//     free(result);

//     // Test 5
//     result = ft_strtrim("aaaaa", "a");
//     printf("Test 5:\nExpected: ''
//		\nYour output: '%s'\n\n", result);
//     free(result);

//     // Test 6
//     result = ft_strtrim("   Hello World   ", " ");
//     printf("Test 6:\nExpected: 'Hel
//		lo World'\nYour output: '%s'\n\n", result);
//     free(result);

//     // Test 7
//     result = ft_strtrim("Hello", "xyz");
//     printf("Test 7:\nExpected: '
//		Hello'\nYour output: '%s'\n\n", result);
//     free(result);

//     // Test 8: Characters in the middle
//     result = ft_strtrim("xxHelloxxWorldxx", "x");
//     printf("Test 8:\nExpected: 'Hellox
//		xWorld'\nYour output: '%s'\n\n", result);
//     free(result);

//     return (0);
// }
