/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:30:25 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/26 15:40:26 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str) // Fonksiyonumuzda 1 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.

	i = 0; // i değişkenini 0'a eşitliyoruz.
	while (str[i]) // str değişkeninin i değerindeki indeksi varsa döngüye giriyoruz.
	{
		if (str[i] >= 'a' && str[i] <= 'z') // str değişkeninin i değerindeki indeksi küçük a harfinden büyükse/eşitse ve küçük z harfinden küçükse/eşitse bu koşula giriyoruz.
		{
			str[i] -= 32; // str değişkeninin i değerinindeki indeksinde bulunan alfabetik karakteri büyütmek için ASCII tablosunda 32 değer eksiltiyoruz.
		}
		i++; // i değerini 1 arttırıyoruz.
	}
	return (str); // str değişkeninin değerini döndürüp ekrana yazdırıyoruz.
}
/*int	main()
{
	char str[] = "hasank";
	printf("%s", ft_strupcase(str));
}*/
