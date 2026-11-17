/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 13:34:53 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/14 16:55:37 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static int	size(char *str, char c)
{
	int	word;
	int	size;

	word = 1;
	size = 0;
	while (*str != '\0')
	{
		if (!(c == *str) && word)
		{
			word = 0;
			size++;
		}
		if (c == *str)
			word = 1;
		str++;
	}
	return (size + 1);
}

static void	*kamikaze(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	*createword(char *s, int end)
{
	char	*str;
	int		i;

	str = (char *)malloc((end) + 1);
	i = 0;
	if (!str)
		return (NULL);
	while (i < end)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		end;

	str = (char **)malloc(sizeof(char *) * (size((char *)s, c)));
	i = 0;
	while (*s)
	{
		end = 0;
		while (*s == c)
			s++;
		if (!*s)
			break ;
		while (*(s + end) != c && *(s + end))
			end++;
		str[i] = createword((char *)s, end);
		if (!str[i])
			return (kamikaze(str));
		i++;
		s = s + end;
	}
	str[i] = NULL;
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     char **result;
//     int i;

//     // Test 1
//     result = ft_split("hello,world", ',');
//     printf("Test 1:\nExpected: [hello] [world]\nYour output: ");
//     for (i = 0; result[i]; i++)
//         printf("[%s] ", result[i]);
//     printf("\n\n");
//     for (i = 0; result[i]; i++)
//         free(result[i]);
//     free(result);

//     // Test 2
//     result = ft_split("hello", ',');
//     printf("Test 2:\nExpected: [hello]\nYour output: ");
//     for (i = 0; result[i]; i++)
//         printf("[%s] ", result[i]);
//     printf("\n\n");
//     for (i = 0; result[i]; i++)
//         free(result[i]);
//     free(result);

//     // Test 3
//     result = ft_split(",hello,world,", ',');
//     printf("Test 3:\nExpected: [hello] [world]\nYour output: ");
//     for (i = 0; result[i]; i++)
//         printf("[%s] ", result[i]);
//     printf("\n\n");
//     for (i = 0; result[i]; i++)
//         free(result[i]);
//     free(result);

//     // Test 4
//     result = ft_split("hello,,world", ',');
//     printf("Test 4:\nExpected: [hello] [world]\nYour output: ");
//     for (i = 0; result[i]; i++)
//         printf("[%s] ", result[i]);
//     printf("\n\n");
//     for (i = 0; result[i]; i++)
//         free(result[i]);
//     free(result);

//     // Test 5
//     result = ft_split(",,,,", ',');
//     printf("Test 5:\nExpected: []\nYour output: ");
//     for (i = 0; result[i]; i++)
//         printf("[%s] ", result[i]);
//     printf("\n\n");
//     for (i = 0; result[i]; i++)
//         free(result[i]);
//     free(result);

//     // Test 6
//     result = ft_split("", ',');
//     printf("Test 6:\nExpected: []\nYour output: ");
//     for (i = 0; result[i]; i++)
//         printf("[%s] ", result[i]);
//     printf("\n\n");
//     for (i = 0; result[i]; i++)
//         free(result[i]);
//     free(result);

//     // Test 7
//     result = ft_split("abc def ghi", ' ');
//     printf("Test 7:\nExpected: [abc] [def] [ghi]\nYour output: ");
//     for (i = 0; result[i]; i++)
//         printf("[%s] ", result[i]);
//     printf("\n\n");
//     for (i = 0; result[i]; i++)
//         free(result[i]);
//     free(result);

//     return (0);
// }
