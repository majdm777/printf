/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 13:37:54 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/18 20:11:06 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

format	*ft_parser(const char *str,int *index)
{
	format	*ft;

	ft =(format *)malloc(sizeof(format));
	if(!ft)
		return(NULL);
	ft->flag = ft_extractflags(str,index);
	ft->width = ft_extractwidth(str,index);
	ft->precision = -1;
	if(str[*index] == '.')
		ft->precision= ft_extractprecision(str,index);
	ft->conversion = str[*index];
	return (ft);
}


// int main()
// {
// 	format *ptr;
// 	int i = 0;
// 	i++;
// 	ptr = ft_parser("%x",&i);
// 	printf("%d || %d || %d || %c || %d",ptr->flag,ptr->width,ptr->precision,ptr->conversion , i);
// 	cc ft_parser.c ft_extractwidth.c ft_extractflags.c ft_extractprecision.c isflag.c
// }
