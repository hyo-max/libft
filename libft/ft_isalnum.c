/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:31:14 by hyojpark          #+#    #+#             */
/*   Updated: 2021/11/16 19:28:16 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if (('a' <= c && c <= 'z') || ('a' <= c && c <= 'z') ||
		('1' <= c && c <= '9'))
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum(']'));
	printf("\n");
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum(']'));
}

//매개변수로 들어오는 숫자가 알파벳 또는 숫자면 0이 아닌 값을 반환한다.