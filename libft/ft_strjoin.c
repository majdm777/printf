/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 12:35:14 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/14 16:54:10 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>

// // char    *ft_strjoin(char const *s1, char const *s2);

// int main(void)
// {
//     char    *result;

//     result = ft_strjoin("Hello ", "42");
//     if (!result)
//         return (1);

//     printf("Result: %s\n", result);
//     free(result);

//     result = ft_strjoin("", "Hello");
//     printf("Empty s1: %s\n", result);
//     free(result);

//     result = ft_strjoin("Hello", "");
//     printf("Empty s2: %s\n", result);
//     free(result);

//     result = ft_strjoin("", "");
//     printf("Both empty: '%s'\n", result);
//     free(result);

//     return (0);
// }
