/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:06:49 by lyandriy          #+#    #+#             */
/*   Updated: 2022/09/18 19:58:06 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*a;

	a = (char *)dst;
	i = 0;
	while (i < n)
	{
		a[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

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