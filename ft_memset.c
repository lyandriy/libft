/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:04:04 by lyandriy          #+#    #+#             */
/*   Updated: 2022/09/18 16:21:00 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*a;

	i = 0;
	a = b;
	while (i != len)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (a);
}

/*
int main(void)
{
	char a[] = "hola mundo";
	ft_memset(a, 'l', 4);
	printf("%s", a);
}
*/