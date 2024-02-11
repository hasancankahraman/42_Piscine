/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:43:21 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/25 19:53:21 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n) // Fonksiyonumuzda bir int parametresi istiyoruz
{
	if (n < 0) // İstediğimiz değere sıfırdan küçükse
		write(1, "N", 1); // Ekrana N harfi yazdır
	else
		write(1, "P", 1); // Ekrana P harfi yazdır
}

/*int	main(void)
{
	
	ft_is_negative(-5);
	return (0);
}
*/