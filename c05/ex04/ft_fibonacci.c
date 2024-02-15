/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:56:02 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/28 11:11:12 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index) // Fonksiyonumuzda 1 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	if (index < 0) // index değeri 0'dan küçükse bu koşula giriyoruz.
		return (-1); // -1 döndürüp ekrana yazdırıyoruz.
	if (index < 2) // index değeri 2'den küçükse bu koşula giriyoruz.
		return (index); // index değerini döndürüp ekrana yazdırıyoruz.
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1)); // index değerinin 2 ve 1 öncesindeki index değerlerine ait fibonacci sayılarının toplamını döndürüyoruz.
}

/*int	main(void)
{
	printf("%i", ft_fibonacci(7));
}*/
