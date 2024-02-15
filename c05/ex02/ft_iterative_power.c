/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 09:53:11 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/28 10:03:12 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power) // Fonksiyonumuzda 2 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	int	result; // result adında integer tipinde bir değişken tanımlıyoruz.

	result = nb; // nb değişkeninin değerini result değişkeninin değerine eşitliyoruz.
	while (power > 1) // power değişkeninin değeri 1'den büyükse bu döngüye giriyoruz.
	{
		result *= nb; // result değişkeninin değerinin nb değişkeninin değeri ile çarpımının sonucunu result değişkenine eşitliyoruz.
		power--; // power'ın değerini 1 azaltıyoruz.
	}
	if (power == 0) // power değişkeninin değeri 0'a eşitse bu koşula giriyoruz.
		return (1); // 1 döndürüp ekrana yazdırıyoruz.
	if (power < 0) // power değişkeninin değeri 0'dan küçükse bu koşula giriyoruz.
		return (0); // 0 döndürüp ekrana yazdırıyoruz.
	return (result); // result değerini döndürüp ekrana yazdırıyoruz.
}

/*int	main(void)
{
	printf("%i", ft_iterative_power(3, 4));
}*/
