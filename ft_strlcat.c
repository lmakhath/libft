/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakhath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 12:25:44 by lmakhath          #+#    #+#             */
/*   Updated: 2017/08/25 12:59:11 by lmakhath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t len;

	len = ft_strlen(dst);
	i = 0;
	while (dst[i])
		i++;
	j = 0;
	if (size < len)
		return (ft_strlen(src) + size);
	if (size == len)
		return (len + ft_strlen(src));
	else
	{
		while (src[j] && j < size - len - 1)
		{
			dst[i] = src[j];
			j++;
			i++;
		}
		dst[i] = '\0';
		return (len + ft_strlen(src));
	}
}
