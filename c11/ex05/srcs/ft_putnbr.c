/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:22:18 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/07 11:26:14 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	ch;
	long	num;

	num = nb;
	if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	if (num > 9 || num < -9)
		ft_putnbr(num / 10);
	ch = num % 10 + '0';
	write(1, &ch, 1);
}