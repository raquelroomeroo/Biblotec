/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqromer <raqromer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:14:07 by raqromer          #+#    #+#             */
/*   Updated: 2024/10/11 20:10:22 by raqromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char    *tmp_dst;
    unsigned char    *tmp_src;
    if (dst == (void *)0 && src == (void *)0)
        return (dst);
    tmp_dst = (unsigned char *) dst;
    tmp_src = (unsigned char *) src;
    while (n > 0)
    {
        *(tmp_dst++) = *(tmp_src++);
        n--;
    }
    return (dst);
}