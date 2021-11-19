/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:15:43 by hyojpark          #+#    #+#             */
/*   Updated: 2021/11/19 17:07:43 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


char **ft_split(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c)
	{
		
	}
}

int main(void)
{
	printf("%s\n",ft_split("abc def abd", ' '));
}