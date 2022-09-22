/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:29:47 by lyandriy          #+#    #+#             */
/*   Updated: 2022/09/21 19:37:16 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strrchr(const char *s, int c)
{
	int j;

	j = ft_strlen(s);
	while (j >= 0)
	{
		if (s[j] == c)
			return(&s[j]);
		j--;
	}
	return('\0');
}