/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:34:52 by hyojpark          #+#    #+#             */
/*   Updated: 2022/01/31 17:52:46 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <fcntl.h>    


// void	del(void *content)
// {
// 	free(content);
// }

// void	f(unsigned int a, char *str)
// {
// 	printf("%c %s\n", a, str);
// }

// char strmapi_oddcheck(unsigned int i, char c)
// {
// 	char x;
// 	x = 'x';
// 	if(i % 2 == 1)
// 		return(c);
// 	else
// 		return(x);
// }
int main(void)
{
	// int fd = open("text.txt",O_WRONLY);
	// ft_putnbr_fd(2147483647,fd);

	// char * str = strdup("1");
	// str = strdup("0123456789");
	// printf("%s\n", ft_substr("tripouille", 0, 42000));
	// printf("%s\n", ft_substr(str, 9, 10));

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

	// printf("atoi 2147483648 : %d\n",atoi("2147483648"));
	// printf("ft_atoi 2147483648 :%d\n",ft_atoi("2147483648"));

	// printf("atoi -2147483649 : %d\n",atoi("-2147483649"));
	// printf("ft_atoi -2147483649 :%d\n",ft_atoi("-2147483649"));

	// printf("atoi -2147483649 :%d\n",atoi("+2147"));
	// printf("ft_atoi -2147483649 :%d\n",ft_atoi("+2147"));

	// int nums1[5];
	// unsigned char nums2[5];
	// int i;

	// memset(nums1, 10, sizeof(nums1));
	// memset(nums2, 10, sizeof(nums2));
	
	// for (i = 0; i < 5; i++) {
	// 	printf("nums1[%d] = %d \n", i, nums1[i]);
	// }
	
	// printf("\n");

	// for (i = 0; i < 5; i++) {
	// 	printf("nums2[%d] = %d \n", i, nums2[i]);
	// }
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
	
	// char *a = "1234abcd1234efg123";
	// char *b = "1234";
	// printf("%s\n",ft_strtrim(a,b));


	// char	**result;

	// result = ft_split(" a d  vdsfa", ' ');
	
	// for (int i = 0; i < 3; i++)
	// 	printf("%s\n",result[i]);
	// free(result);
	// result = NULL;
	// /* ft_split("a12aaa12", 'a') = ["12", "12"]과 같은 방식으로 특정 문자가 
	// 덕지덕지 붙어있는 경우에도 잘 처리해야 한다.*/

	// printf("%s\n",ft_itoa(-2147483648));

	//  printf("a int max 2147483647 : %d\n", atoi("2147483647"));
    // printf("f int max 2147483647 : %d\n", ft_atoi("2147483647"));
    // printf("a int min -2147483648 : %d\n", atoi("-2147483648"));
    // printf("f int min -2147483648 : %d\n", ft_atoi("-2147483648"));
    // printf("a int over 9999999999 : %d\n", atoi("9999999999"));
    // printf("f int over 9999999999 : %d\n", ft_atoi("9999999999"));
    // printf("a int under -9999999999 : %d\n", atoi("-9999999999"));
    // printf("f int under -9999999999 : %d\n", ft_atoi("-9999999999"));
    // printf("a long long plus 92233720368547758 : %d\n", atoi("92233720368547758"));
    // printf("f long long plus 92233720368547758 : %d\n", ft_atoi("92233720368547758"));
    // printf("a long long minus -92233720368547758 : %d\n", atoi("-92233720368547758"));
    // printf("f long long minus -92233720368547758 : %d\n", ft_atoi("-92233720368547758"));
    // printf("a long long max 9223372036854775807 : %d\n", atoi("9223372036854775807"));
    // printf("f long long max 9223372036854775807 : %d\n", ft_atoi("9223372036854775807"));
    // printf("a long long min -9223372036854775808 : %d\n", atoi("–9223372036854775808"));
    // printf("f long long min -9223372036854775808 : %d\n", ft_atoi("–9223372036854775808"));
    // printf("a long long max / 10 922337203685477580 : %d\n", atoi("922337203685477580"));
    // printf("f long long max / 10 922337203685477580 : %d\n", ft_atoi("922337203685477580"));
    // printf("a long long max / 10 + 1 922337203685477581 : %d\n", atoi("922337203685477581"));
    // printf("f long long max / 10 + 1 922337203685477581 : %d\n", ft_atoi("922337203685477581"));
    // printf("a long long max / 10 + 4 922337203685477584 : %d\n", atoi("922337203685477584"));
    // printf("f long long max / 10 + 4 922337203685477584 : %d\n", ft_atoi("922337203685477584"));
    // printf("a long long max / 10 + 5 922337203685477585 : %d\n", atoi("922337203685477585"));
    // printf("f long long max / 10 + 5 922337203685477585 : %d\n", ft_atoi("922337203685477585"));
    // printf("a long long max - 1 922337203685477586 : %d\n", atoi("922337203685477586"));
    // printf("f long long max - 1 922337203685477586 : %d\n", ft_atoi("922337203685477586"));
    // printf("a long long max + 1 9223372036854775808 : %d\n", atoi("9223372036854775808"));
    // printf("f long long max + 1 9223372036854775808 : %d\n", ft_atoi("9223372036854775808"));
    // printf("a long long max + 2 9223372036854775809 : %d\n", atoi("9223372036854775809"));
    // printf("f long long max + 2 9223372036854775809 : %d\n", ft_atoi("9223372036854775809"));
    // printf("a long long max + 10 9223372036854775817 : %d\n", atoi("9223372036854775817"));
    // printf("f long long max + 10 9223372036854775817 : %d\n", ft_atoi("9223372036854775817"));
    // printf("a long long min - 1 –9223372036854775809 : %d\n", atoi("–9223372036854775809"));
    // printf("f long long min - 1 –9223372036854775809 : %d\n", ft_atoi("–9223372036854775809"));
    // printf("a long long min - 2 –9223372036854775810 : %d\n", atoi("–9223372036854775810"));
    // printf("f long long min - 2 –9223372036854775810 : %d\n", ft_atoi("–9223372036854775810"));
    // printf("a long long min - 10 –9223372036854775818 : %d\n", atoi("–9223372036854775818"));
    // printf("f long long min - 10 –9223372036854775818 : %d\n", ft_atoi("–9223372036854775818"));
    // printf("a long long over 9223379876854775807 : %d\n", atoi("9223379876854775807"));
    // printf("f long long over 9223379876854775807 : %d\n", ft_atoi("9223379876854775807"));
    // printf("a long long under -9223379876854775807 : %d\n", atoi("-9223379876854775807"));
    // printf("f long long under -9223379876854775807 : %d\n", ft_atoi("-9223379876854775807"));
    // printf("a long long half 4611686018427387903 : %d\n", atoi("4611686018427387903"));
    // printf("f long long half 4611686018427387903 : %d\n", ft_atoi("4611686018427387903"));
    // printf("a zero 0 : %d\n", atoi("0"));
    // printf("f zero 0 : %d\n", ft_atoi("0"));
    // printf("a empty  : %d\n", atoi(""));
    // printf("f empty  : %d\n", ft_atoi(""));
    // return (0);

	// char str1[] = "abcdefghijklmnopqrstuvwxyz";
	// char *str2;
	// str2 = ft_strmapi(str1, *strmapi_oddcheck);
	// printf("str2 : %s\n",str2);	// str2 : xbxdxfxhxjxlxnxpxrxtxvxxxz

	// char str1[] = "abcd";
	// char *str2;

	// ft_striteri(str1, &f);
	// printf("str2 : %s\n",str2);	// str2 : xbxdxfxhxjxlxnxpxrxtxvxxxz


 	// char letter = 'A';
 	// ft_putchar_fd(letter, 3);
 	// return(0);

	// char *letter = "avcde";
 	// ft_putstr_fd(letter, 2);
 	// return(0);

	// char *letter = "avcde";
 	// ft_putendl_fd(letter, 2);
 	// return(0);

 	// ft_putnbr_fd(-2147483648, 2);
 	// return(0);
	 
 	// char *content = "CONTENT.";
 	// t_list *result = ft_lstnew((void *)content);
 	// printf("The content is %s", (char *)result->content);
 	// return 0;


	// char *a = "abcd";
	// t_list *lst = (t_list *)malloc(sizeof(t_list));
	// if (!lst)
	// 	return(2);
	// lst->content = a;
	// lst->next = NULL;
	// printf("%s\n",(char *)lst->content);

	// t_list *temp;
	// lst->next = temp;
	// while (temp->next)
	// {
	// 	printf("%s\n",(char *)temp->content);
	// 	temp = temp->next;
	// }

	// t_list *lst = (t_list *)malloc(sizeof(t_list));
	// char *a;
	// a =  (char *)malloc(sizeof(char) * 3);
	// a[0] = 'a';
	// a[1] = 'b';
	// a[2] = '\0';
	// lst->content = a;
	// lst->next = NULL;
	// printf("%s\n", (const char *)lst->content);
	// ft_lstdelone(lst, &del);
	// printf("%s\n", (const char *)lst->content);
	// return 0;


}
