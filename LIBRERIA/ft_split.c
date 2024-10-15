/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqromer <raqromer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:26:12 by raqromer          #+#    #+#             */
/*   Updated: 2024/10/11 20:09:29 by raqromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    **ft_split(char const *s, char c)
{
	 if (!s) return NULL;

    int substr_count = count_substrings(s, c);
    char **result = malloc((substr_count + 1) * sizeof(char *));
    if (!result) return NULL;

    int index = 0;
    while (*s) 
	{
        while (*s == c) s++;
        const char *start = s;
        while (*s && *s != c) s++;
        if (start < s) 
		{
            size_t len = s - start;
            result[index] = malloc(len + 1);
            if (!result[index])
			{
               
                for (int j = 0; j < index; j++)
				{
                    free(result[j]);
                }
                free(result);
                return NULL;
            }
            strncpy(result[index], start, len);
            result[index][len] = '\0';
            index++;
        }
    }
    result[index] = NULL;
    return result;
}