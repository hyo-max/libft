/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:34:52 by hyojpark          #+#    #+#             */
/*   Updated: 2021/12/27 20:03:24 by hyojpark         ###   ########.fr       */
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

	// char dst[5] = "abcd";
	
	// ft_memcpy(dst,"efg",2);

	// printf("%s\n", dst);
	
	// char src[6] = "abcde";
	// char dst[6];
	// ft_memmove(dst,src,3);
	// printf("%s\n",dst);
	// printf("%lu\n",sizeof(src));
		
	char d[] = "12345";
	char *s = "123456789";
	// printf("%lu\n",sizeof(s)); // 8 
	// printf("%lu\n",sizeof(d)); // 10
	// ft_strlcpy(d,s,sizeof(s));
	
	printf("%lu\n",ft_strlcpy(d,s,sizeof(d)));
	// ft_strlcat()
}
