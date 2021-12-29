/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 19:54:24 by hyojpark          #+#    #+#             */
/*   Updated: 2021/12/29 23:34:43 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *p;
	
	p = (char *)malloc(sizeof(size) * count);
	if (!p)
		return (NULL);
	ft_memset(p, 0, size * count);
	return (p);
}
