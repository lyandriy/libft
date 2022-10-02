/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:07:59 by lyandriy          #+#    #+#             */
/*   Updated: 2022/10/01 16:52:15 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*src_c;
	char	*dst_c;

	i = 0;
	src_c = (char *)src;
	dst_c = (char *)dst;
	if (src_c == '\0' && dst_c == '\0')
		return (NULL);
	if (dst_c < src_c)
	{
		while (i < len)
		{
			dst_c[i] = src_c[i];
			i++;
		}
	}
	else
	{
		while (len--)
			dst_c[len] = src_c[len];
	}
	return (dst_c);
}
