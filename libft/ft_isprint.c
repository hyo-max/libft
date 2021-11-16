/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:32:52 by hyojpark          #+#    #+#             */
/*   Updated: 2021/11/16 20:00:02 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (0 <= c && c <= 126)
		return (1);
	return (0);
}

int main(void)
{
	printf("%d\n", ft_isprint(127));
	printf("\n");
	printf("%d\n", isprint(127));
}

//127(공백)은 출력대상이 아닌  del(delet)라 제외하고 126까지