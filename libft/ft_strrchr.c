/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 16:27:07 by hyojpark          #+#    #+#             */
/*   Updated: 2021/12/30 02:56:24 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;
	
	s_len = ft_strlen(s);
	while (s_len > 0)
	{
		if (s[s_len] == (char)c)
			return ((char *)s + s_len);
		s_len--;
	}
	return (NULL);	
}
