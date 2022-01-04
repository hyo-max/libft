/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 02:53:30 by hyojpark          #+#    #+#             */
/*   Updated: 2022/01/04 18:29:53 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

long long	negative(int n)
{
	long long	num;

	num = n;
	if (n < 0)
		return (num * -1);
	return (num);
}

int	len_count(long long num)
{
	int	count;

	count = 1;
	while (num > 9)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*result;
	long long	num;
	int			i;
	int			len;

	num = negative(n);
	len = len_count(num);
	if (n < 0)
		len++;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (n < 0)
		result[0] = '-';
	i = 1;
	while (i <= len)
	{
		if (result[len - i] != '-')
			result[len - i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	result[len] = '\0';
	return (result);
}
