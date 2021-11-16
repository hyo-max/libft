/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:48:06 by hyojpark          #+#    #+#             */
/*   Updated: 2021/11/16 20:00:25 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}

int main(void)
{
	printf("%d\n", ft_isascii(128));
	printf("\n");
	printf("%d\n", isascii(128));
}

//0 ~ 127값이면 아스키 기본 아스키 까지만 1(true)로 반환 