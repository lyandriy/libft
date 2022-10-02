/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:04:50 by lyandriy          #+#    #+#             */
/*   Updated: 2022/10/01 20:41:20 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= j)
	{
		ptr  = ft_calloc(1, 1);
		if (!ptr)
			return (NULL);
		return (ptr);	
	}
	if (len > j)
		len = j - start;
	ptr = ft_calloc (sizeof (char), len + 1);
	if (!ptr)
		return (NULL);
	if (len == 0)
		return (ptr);
	ptr = ft_memcpy(ptr, &s[start], len);
	/*while (i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';*/
	return (ptr);
}
