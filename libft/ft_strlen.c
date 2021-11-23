/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:13:53 by hyojpark          #+#    #+#             */
/*   Updated: 2021/11/22 20:39:34 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *c)
{
	size_t	count;

	count = 0;
	while(c[count] != '\0')
		count++;
	return (count);
}

int main(void)
{
	printf("%lu\n", ft_strlen("abcd"));
	printf("%lu\n", strlen("abcd"));
}