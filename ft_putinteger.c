/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putinteger.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 14:57:26 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/18 20:23:19 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <unistd.h>

int	get_precision_len(format *ft,int size)
{
	int i;

	i = 0;
	if(ft->precision < 0)
		return (0);
	i = ft->precision - size;
	if(i < 0)
		return (0);
	return (i);
}
void	handle_width(format *fmt, int tot_size,int nb)
{
	int width_len;

	width_len = 0;
	width_len = fmt->width - tot_size;
	if(width_len < 0)
		width_len = 0;
	if((fmt->flag & 4) && (fmt->precision == -1))
		ft_print_gaps(width_len,'0');
	else if(!fmt->flag)
			ft_print_gaps(width_len,' ');
	else if(fmt->flag & 2)
		ft_print_gaps(width_len,' ');

}
int get_total_len(int precision, int nbr,format *fmt)
{
	int sign;
	int len;
	int nb;

	nb = nbr;
	len = 0;
	sign = 0;
	if(nb == 0)
		len = 1;
	while(nb)
	{
		nb /= 10;
		len++;
	}
	if(nbr < 0 || fmt->flag & 1 || fmt->flag & 8)
		sign = 1;
	return (sign + len + precision);
}
void	handle_sign(format *fmt,int nbr)
{
	if(nbr < 0)
		write(1,"-",1);
	else if(fmt->flag & 1)
		write(1,"+",1);
	else if(fmt->flag & 8)
		write(1," ",1);
}

void	ft_putinteger(format *fmt,int	nbr)
{
	int precision_len;
	long	nb;

	nb = nbr;
	precision_len = get_precision_len(fmt,ft_nbrlen(nb));
	if (fmt->flag & 2)
	{
		handle_sign(fmt,nb);
		ft_print_gaps(precision_len,'0');
		if( nb < 0)
			nb *= -1;
		if (fmt->precision != 0 && nb != 0)
			ft_putnbr_fd(nb,1);
		handle_width(fmt,get_total_len(precision_len,nb,fmt),nb);
		return ;
	}
	handle_width(fmt,get_total_len(precision_len,nb,fmt),nb);
	handle_sign(fmt,nb);
	ft_print_gaps(precision_len,'0');
	if( nb < 0)
		nb *= -1;
	if (!(fmt->precision == 0 && nb == 0))
		ft_putnbr_fd(nb,1);
}
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int i = 1;
	format *ptr = ft_parser("%-+20.12d",&i);
	printf("%d || %d || %d || %c || %d\n",ptr->flag,ptr->width,ptr->precision,ptr->conversion , i);
	ft_putinteger(ptr,-42);
	free(ptr);
}
//cc ft_putinteger.c ft_parser.c ft_print_gaps.c libft/ft_putnbr_fd.c ft_nbrlen.c ft_extractflags.c ft_extractwidth.c ft_extractprecision.c libft/ft_putchar_fd.c isflag.c
