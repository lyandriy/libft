/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:04:43 by lyandriy          #+#    #+#             */
/*   Updated: 2022/09/30 15:59:18 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	if (needle[0] == '\0' || !len)
		return ((char *) haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		k = i;
		while (haystack[k] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *) &haystack[i]);
			k++;
			j++;
		}
		if (needle[j + 1] == '\0')
			return (NULL);
		i++;
	}
	return (NULL);
}
