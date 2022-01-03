/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:34:52 by hyojpark          #+#    #+#             */
/*   Updated: 2022/01/03 14:12:02 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	// printf("%lu\n", ft_strlen("abcd"));
	// printf("%lu\n", strlen("abcd"));
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
		
	// char d[] = "123456789";
	// char *s = "12345";
	// printf("%lu\n",sizeof(s)); // 8 
	// printf("%lu\n",sizeof(d)); // 10
	// ft_strlcpy(d,s,sizeof(s));
	
	// printf("%lu\n",ft_strlcpy(d,s,sizeof(d)));
	// printf("%lu\n",ft_strlcat(d,s,10));
	// printf("%s\n",d);

	// char *s = "aaaacdefgaaa";
	// char c = 'b';
	// // printf("%s\n",strchr(s,c));
	// printf("%s\n",ft_strrchr(s,c));

	// char *s1 = "abcd";
	// char *s2 = "";
	
	// printf("%d\n",ft_strncmp(s1,s2,1));

	// printf("%s\n", ((char *)ft_memchr("abcdefg",'z',8)));
	
	// printf("%d\n", ft_memcmp("azcd","azcd",2));

	// printf("%s\n", ft_strnstr("hi my name is hyojin", "in",39));

	// printf("%d\n",atoi("2147483647 4__12abcd"));
	// printf("%d\n",ft_atoi("2147483647 4__12abcd"));

	// int *p;

	// p = (int *)ft_calloc(10,sizeof(int));

	// for(int i = 0;i<10;i++)
	// {
	// 	printf("%d\n",p[i]);
	// }

	// char *me;
    // me = ft_strdup("who am I");
    // printf("%s\n", me);

	// char *a = "abcd";
	// char *b = "1234";
	// printf("%s\n",ft_strjoin(a,b));
	
	char *a = "1234abcd1234efg123";
	char *b = "1234";
	printf("%s\n",ft_strtrim(a,b));

}
