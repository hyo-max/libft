/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:38:52 by hyojpark          #+#    #+#             */
/*   Updated: 2021/12/29 19:45:58 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int space_chack(char a)
{
	if (a == '\t' || a == '\n' || a == '\v' || a == '\f' ||
		a == '\r' || a == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int negative;

	result = 0;
	negative = 1;
	while(space_chack(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		result *= 10;
		result += (*str - '0') * negative;
		str++;
	}
	return (result);
}