/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:49:15 by hyojpark          #+#    #+#             */
/*   Updated: 2021/11/19 14:49:15 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	int		i;

	substring = (char *)malloc(sizeof(char) * (len - start + 1));
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (start < len)
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	substring[i] = '\0';
	return (substring);
}

int main(void)
{
	printf("%s\n", ft_substr("abcd",2,4));
}
