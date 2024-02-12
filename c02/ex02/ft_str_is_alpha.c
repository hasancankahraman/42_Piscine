/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:47:39 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/26 13:53:03 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str) // Fonksiyonumuzda 1 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.

	i = 0; // i değerini 0'a eşitliyoruz.
	if (str[i] == '\0') // Eğer str değişkeninin i değerindeki indeksi boşluğa eşitse bu koşula giriyoruz.
	{
		return (1); // 1 döndürüp ekrana yazdırıyoruz.
	}
	while (str[i]) // str değişkeninin i değerindeki indeksi varsa döngüye giriyoruz.
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z')) // str değişkeninin i değerindeki indeksi büyük A harfinden büyükse/eşitse ve büyük Z harfinden küçükse/eşitse ya da küçük a harfinden büyükse/eşitse ve küçük z harfinden küçükse/eşitse bu koşula giriyoruz.
			i++; // i değerini 1 arttırıyoruz.
		else // if koşulu tutmuyorsa buraya giriyoruz.
			return (0); // 0 döndürüp ekrana yazdırıyoruz.
	}	
	return (1); // 1 döndürüp ekrana yazdırıyoruz.
}
/*int	main()
{
	printf("%d", ft_str_is_alpha("abcdefghijkl"));
	printf("\n%d", ft_str_is_alpha("abc1defghijkl"));
	printf("\n%d", ft_str_is_alpha("-_134556efghij67"));
}   */
