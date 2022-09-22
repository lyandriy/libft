/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:26:04 by lyandriy          #+#    #+#             */
/*   Updated: 2022/09/21 18:12:11 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t c_d;
	size_t c_s;
	size_t c;

	c = 0;
	c_d = ft_strlen(dst);
	c_s = ft_strlen(src);
	if (dstsize == 0 || dstsize <= c_d)
		return (dstsize + c_s);
	while (src[k] != '\0' && c_d + k < (dstsize - 1))
	{
		dst[c_d + k] = src[k];
		k++;
	}
	dst[c_d + k] = '\0';
	return (c_d + c_s);
}