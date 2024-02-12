/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:50:25 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/26 15:20:26 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str) // Fonksiyonumuzda 1 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.

	i = 0; // i değişkenini 0'a eşitliyoruz.
	while (str[i]) // str değişkeninin i değerindeki indeksi varsa döngüye giriyoruz.
	{
		if (!(str[i] >= 32 && str[i] <= 126)) // str değişkenin i değerindeki indeksi ASCII tablosundaki 32 değerinden büyük/eşit değilse ve 126 değerinden küçük/eşit değilse bu koşula giriyoruz.
		{
			return (0); // 0 döndürüp ekrana yazdırıyoruz.
		}
		i++; // i değerini 1 arttırıyoruz.
	}
	return (1); // 1 döndürüp ekrana yazdırıyoruz.
}

/*int	main()
{
	printf("%d", ft_str_is_printable("ABDELKFSCO?I340990%"));
	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}*/
