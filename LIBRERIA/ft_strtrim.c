/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqromer <raqromer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:27:00 by raqromer          #+#    #+#             */
/*   Updated: 2024/10/11 20:11:47 by raqromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		end;
	int		beg;
	int		i;

	i = 0;
	beg = 0;
	endn = ft_strlen((char *)s1);
	while (set[i] != '\0')
	{
		if (s1[beg] ==  set[i])
		{
			beg++;
			i = -1;
		}
		if (s1[end -1] == set[i])
		{
			end--;
			i = -1;
		}
		i++;
	}
	str = ft_substr(s1, beg, (end - beg));
	return (str);
}