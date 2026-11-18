/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 14:44:13 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/18 19:35:10 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"
#include "ft_printf.h"

int	conversion(const char *s,int *index)
{
	int	i;

	i = *index;
	i ++;
	while(isflag(s[i]) || s[i] == '.' || ft_isalnum(s[i]))
	{
		if(isConversion(s[i]))
			return (i);
		i++;
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	format	*ptr;
	int	i;
	
	i = 0;
	va_start(args,str);
	while(str[i])
	{
		if(str[i] != '%')
			ft_putchar_fd(str[i++],1);
		else
		{
			if(!conversion(str,&i))
				continue ;
			ptr = ft_parser(str,&i);
			free(ptr);
		}
	}

}
