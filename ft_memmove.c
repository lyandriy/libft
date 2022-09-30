/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:07:59 by lyandriy          #+#    #+#             */
/*   Updated: 2022/09/30 15:52:02 by lyandriy         ###   ########.fr       */
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

/*
int	main(void)
{
	char src[] = "123456789";
	char dst[] = "123456789";

	printf("Before memmove dest = %s, src = %s\n", dst, src);
	ft_memmove(dst, src, 3);
	printf("After memmove dest = %s, src = %s\n", dst, src);

   char dest[] = "123456789";
   const char s0rc[]  = "123456789";

   printf("Before memmove dest = %s, src = %s\n", dest, s0rc);
   memmove(dest, s0rc, 3);
   printf("After memmove dest = %s, src = %s\n", dest, s0rc);

	char dest1[] = "123456789";
	const char s1rc[]  = "123456789";

   printf("Before memmove dest = %s, src = %s\n", dest1, s1rc);
   memcpy(dest1, s1rc, 3);
   printf("After memmove dest = %s, src = %s\n", dest1, s1rc);

   return(0);
}
*/