/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 15:35:13 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/18 20:04:00 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

typedef	struct format
{
	int flag;
	int width;
	int precision;
	char conversion;
}format;


int	ft_printf(const char *format, ...);
int	isflag(char c);
int	ft_extractflags(const char *s, int *index);
int	ft_extractprecision(const char *s, int *index);
int	ft_extractwidth(const char *s, int *index);
int	isConversion(char c);
int	ft_nbrlen(int nbr);
format	*ft_parser(const char *str,int *index);
void	ft_print_gaps(int count, char c);

#endif
