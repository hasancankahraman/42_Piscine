/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:22:43 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/28 10:33:23 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power) // Fonksiyonumuzda 2 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	int	result; // result adında integer tipinde bir değişken tanımlıyoruz.

	result = nb; // nb değişkeninin değerini result değişkeninin değerine eşitliyoruz.
	if (power > 1) // power 
		return (nb * ft_recursive_power(nb, (power - 1))); // ft_recursive_power(nb, (power - 1)) fonksiyonunun çağrısı ile çalışır ve her çağrı ile power değeri bir azaltılır. 
	if (power == 0) // power değişkeninin değeri 0'a eşitse bu koşula giriyoruz.
		return (1); // 1 döndürüp ekrana yazdırıyoruz.
	if (power < 0) // power değişkeninin değeri 0'dan küçükse bu koşula giriyoruz.
		return (0); // 0 döndürüp ekrana yazdırıyoruz.
	return (result); // result değerini döndürüp ekrana yazdırıyoruz.
}

/*int	main(void)
{
	printf("%i", ft_recursive_power(5, 1));
}*/
