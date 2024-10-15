/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqromer <raqromer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:42:17 by raqromer          #+#    #+#             */
/*   Updated: 2024/10/05 13:28:31 by raqromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-');
		ft_putnbr_fd(2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-');
		ft_putnbr_fd(-nb);
		return ;
	}
	if (nb < 10)
	{
		ft_putchar_fd(nb + '0');
		return ;
	}
	else
		ft_putnbr_fd(nb / 10);
	ft_putnbr_fd(nb % 10);
}
