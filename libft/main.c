/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:34:52 by hyojpark          #+#    #+#             */
/*   Updated: 2021/12/22 07:15:53 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	// printf("%d\n", ft_isalnum('1'));
	// printf("%d\n", ft_isalnum('a'));
	// printf("%d\n", ft_isalnum(']'));
	// printf("\n");
	// printf("%d\n", ft_isalnum('1'));
	// printf("%d\n", ft_isalnum('a'));
	// printf("%d\n", ft_isalnum(']'));
	// printf("\n");
	// printf("\n");
	// printf("memset");
	// printf("\n");
	
	// char a[] = "blockdmask blog";
	
	// ft_bzero(a, 5);
	// printf("%s\n", a);
	// for (int i = 0; i < (sizeof(a)/sizeof(char)); i++)
	// 	printf("%c\n",a[i]);

	char dst[5] = "abcd";
	
	ft_memcpy(dst,"efg",2);

	printf("%s\n", dst);
	
}
