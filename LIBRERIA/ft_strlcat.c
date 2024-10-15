/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqromer <raqromer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:13:37 by raqromer          #+#    #+#             */
/*   Updated: 2024/10/12 14:12:42 by raqromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat	(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t  dts_len;
	
	src_len = ft_strlen(src);
	dts_len = ft_strlen(dst);
	
	if (dst_len >= dstsize)
		dst_len = dstsize;
	if (dst_len == dstsize)
		return (dstsize + src_len;)
	else
	{
		ft_memcpy(dst + dst_len, src, dtsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}