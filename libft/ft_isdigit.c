/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:24:35 by hyojpark          #+#    #+#             */
/*   Updated: 2021/11/16 19:28:33 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
	if ('1' <= c && c <= '9')
		return (1);
	return (0);
}

int main(void)
{
	printf("%d\n",ft_isdigit('9'));
}


// 문자열로 하나씩 받을 때 숫자면 true 아니면 false를 반환하는 함수