/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:05:52 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/14 16:53:07 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*var;

	var = s;
	i = 0;
	while (i < n)
	{
		var[i] = (unsigned char)c;
		i++;
	}
	return (var);
}

// int main() {
//     char arr[5];

//     ft_memset(arr, 0, sizeof(arr));

//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }

//     return (0);
// }
