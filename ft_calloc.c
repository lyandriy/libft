/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:01:29 by lyandriy          #+#    #+#             */
/*   Updated: 2022/10/01 16:28:41 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*i;
	size_t	j;

	j = 0;
	i = malloc (size * count);
	if (!i)
		return (0);
	while (j < count * size)
	{
		i[j] = '\0';
		j++;
	}
	return (i);
}
