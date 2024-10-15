/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqromer <raqromer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:10:15 by raqromer          #+#    #+#             */
/*   Updated: 2024/10/11 20:11:38 by raqromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c);
{
	unsigned int i;
	char *res;
	char cc;
	
	cc = (char) c;
	
	res = NULL;
	i = 0;

	while (s[i])
	{
		if (s[i] == cc)
			res = (char)
	}
	return ;
}