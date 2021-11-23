/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:05:35 by hyojpark          #+#    #+#             */
/*   Updated: 2021/11/23 14:19:52 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// void *ft_memset(void *b, int c, size_t len)
// {
	
// }

int main(void)
{
	char a[20];
	
	memset(a, 65, sizeof(a));

	for(int i = 0; i < (sizeof(a)/sizeof(char));i++)
		printf("%c\n", a[i]);
}