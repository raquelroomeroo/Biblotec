/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqromer <raqromer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:26:49 by raqromer          #+#    #+#             */
/*   Updated: 2024/10/11 20:21:53 by raqromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    size_t i;
    unsigned char uc;
    
    str = (unsigned char *) s;
    uc (unsigned char) c;
    i = 0;
    while (i < n)
    {
        if (str[i] == uc)
        return ((void *) &str[i]);
        i++;
    }
    return (NULL);
}
