/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 11:22:18 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/27 11:26:14 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2) // Fonksiyonumuzda 2 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.

	i = 0; // i değişkenini 0'a eşitliyoruz.
	while (s1[i] == s2[i] && s1[i] && s2[i]) // s1 değişkenin i değerindeki indeksi s2 değişkeninin i değerindeki indeksine eşitse ve s1 değişkeninin i değerindeki indeksi varsa ve s2 değişkeninin i değerindeki indeksi varsa bu koşula giriyoruz.
	{
		i++; // i değerini 1 arttırıyoruz.
	}
	return (s1[i] - s2[i]); // s1 değişkeninin i değerindeki indeksinden s2 değişkeninin i değerindeki indeksinin ASCII değerlerinin karşılıklarını çıkartıp döndürüyoruz ve ekrana yazdırıyoruz.
}
/*int	main()
{
	printf("%d\n", ft_strcmp("HsanK", "HasanK"));
	printf("%d\n", ft_strcmp("HasanK", "hasan K"));
	printf("%d", ft_strcmp("hasanK", "hasanK"));
}*/
