/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:15:43 by hyojpark          #+#    #+#             */
/*   Updated: 2021/12/30 02:54:52 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	int		i;
	int		word_count;

	i = 0;
	word_count = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			word_count++;
	}
}

int main(void)
{
	char	**result;

	result = ft_split("abc def abd", ' ');
	
	for (int i = 0, i < 4; i++)
		printf("%s\n",result[i]);
	
	free(result);
	result = NULL;
}