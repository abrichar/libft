/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:44:32 by abrichar          #+#    #+#             */
/*   Updated: 2018/06/14 19:26:34 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*strnew;
	size_t		index;

	if (s != 0)
	{
		if (!(strnew = (char *)malloc(sizeof(char) * len + 1)))
			return (0);
		index = 0;
		while (index < len)
		{
			strnew[index] = s[start];
			index++;
			start++;
		}
		strnew[index] = '\0';
		return (strnew);
	}
	return (0);
}
