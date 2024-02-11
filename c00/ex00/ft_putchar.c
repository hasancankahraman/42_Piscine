/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:00:19 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/25 17:50:52 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) // Fonksiyonumuzda bir char parametresi istiyoruz
{
	write(1, &c, 1); // Fonksiyonun istediği char parametresini yazdırır
}

/*int	main(void)
{
	ft_putchar('a');
	return (0);
}
*/