/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:05:35 by hyojpark          #+#    #+#             */
/*   Updated: 2022/01/29 03:30:34 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (temp);
}
