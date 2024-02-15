/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factoria.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:12:28 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/28 09:26:14 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int	nb) // Fonksiyonumuzda 1 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	unsigned int	result; // result adında unsigned integer tipinde bir değişken tanımlıyoruz.

	result = 1; // result değişkenini 1'e eşitliyoruz.
	while (nb > 0) // nb değişkeninin değeri 0'dan büyükse bu döngüye giriyoruz.
	{
		result *= nb; // result değişkeninin değerinin nb değişkeninin değeri ile çarpımının sonucunu result değişkenine eşitliyoruz.
		nb--; // nb'nin değerini 1 azaltıyoruz.
	}
	if (nb < 0) // nb değişkeninin değeri 0'dan küçükse bu koşula giriyoruz.
	{
		return (0); // 0 döndürüp ekrana yazdırıyoruz.
	}
	return (result); // result değerini döndürüp ekrana yazdırıyoruz.
}

/*int main (void)
{
	printf("%i", ft_iterative_factorial(3));
}*/
