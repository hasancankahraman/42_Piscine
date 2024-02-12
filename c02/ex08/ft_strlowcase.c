/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:22:25 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/26 16:34:26 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str) // Fonksiyonumuzda 1 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.

	i = 0; // i değişkenini 0'a eşitliyoruz.
	while (str[i]) // str değişkeninin i değerindeki indeksi varsa döngüye giriyoruz.
	{
		if (str[i] >= 'A' && str[i] <= 'Z') // str değişkeninin i değerindeki indeksi büyük A harfinden büyükse/eşitse ve büyük Z harfinden küçükse/eşitse bu koşula giriyoruz.
		{
			str[i] += 32; // str değişkeninin i değerinindeki indeksinde bulunan alfabetik karakteri küçültmek için ASCII tablosunda 32 değer arttırıyoruz.
		}
		i++; // i değerini 1 arttırıyoruz.
	}
	return (str); // str değişkeninin değerini döndürüp ekrana yazdırıyoruz.
}
/*int	main()
{
	char str[] = "HASANK";
	printf("%s", ft_strlowcase(str));
}*/
