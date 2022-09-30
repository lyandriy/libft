/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:06:49 by lyandriy          #+#    #+#             */
/*   Updated: 2022/09/23 17:45:09 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*a;

	a = (char *)dst;
	i = 0;
	if (src == '\0' && dst == '\0')
		return (0);
	while (i < n)
	{
		a[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

/*void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*d;
	const char		*s;

	d = dst;
	s = src;
	if (dst == '\0' && src == '\0')
		return (NULL);
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}*/

/*
int	main(void)
{
	char src[] = "abcdef";
	char dst[] = "123456789";

	printf("Before memcpy dest = %s, src = %s\n", dst, src);
	ft_memcpy(dst, src, 3);
	printf("After memcpy dest = %s, src = %s\n", dst, src);
}
*/