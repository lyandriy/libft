/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:04:18 by lyandriy          #+#    #+#             */
/*   Updated: 2022/09/30 21:05:15 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_cpy(char *dst, const char *src, int n)
{
	int	i;

	i = 0;
	if (src == '\0' && dst == '\0')
		return (0);
	while (i < n)
	{
		dst[i] = ((char *)src)[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	ft_count(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

int	ft_neverita(char const *s, char c)
{
	int	i;
	int	count;
	int	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			count = ft_count(&s[i], c);
			i = i + count + 1;
			k++;
		}
	}
	return (k);
}

char	**ft_nose_tam(char **ptr, const char *s, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			count = ft_count(&s[i], c);
			ptr[j] = malloc (count + 1 * sizeof (char));
			if (!ptr)
				return (NULL);
			ptr[j] = ft_cpy(ptr[j], &s[i], count);
			i = i + count + 1;
			j++;
		}
	}
	ptr[j] = (NULL);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = (char **) malloc((ft_neverita (s, c) + 1) * sizeof (char *));
	if (!ptr)
		return (NULL);
	ft_nose_tam(ptr, s, c);
	return (ptr);
}