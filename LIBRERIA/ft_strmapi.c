/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqromer <raqromer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:26:50 by raqromer          #+#    #+#             */
/*   Updated: 2024/10/11 20:11:24 by raqromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	if (!s) return NULL;

    size_t len = strlen(s);
    char *result = malloc(len + 1);

    if (!result) return NULL;

    for (size_t i = 0; i < len; i++) 
	{
        result[i] = f(i, s[i]);
    }
    result[len] = '\0';

    return result;
}