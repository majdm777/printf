/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaatouk <mmaatouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 15:35:13 by mmaatouk          #+#    #+#             */
/*   Updated: 2026/11/17 19:36:32 by mmaatouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_printf(const char *format, ...);
int	isflag(char c);
int	ft_extractflags(const char *s, int *index);
int	ft_extractprecision(const char *s, int *index);
int	isConversion(char c);

#endif
