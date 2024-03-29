/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:22:18 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/26 13:28:14 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, char *src) // Fonksiyonumuzda 2 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer tipinde bir değişken oluşturuyoruz.

	i = 0; // i'nin değerini 0'a eşitliyoruz.
	while (src[i]) // Eğer src değişkeninin i değerindeki indeksi varsa bir döngüye giriyoruz.
	{
		dest[i] = src[i]; // src değişkeninin i değerindeki indeksini dest değişkeninin i değerindeki indeksine gönderiyoruz.
		i++; // i değişkenini 1 arttırıyoruz.
	}
	dest[i] = '\0'; // Kopyalama işlemi bitip, döngüden çıktıktan sonra dest değişkeninin i değerindeki indeksini boşluğa eşitliyoruz.
	return (dest); // dest değerini döndürüp ekrana yazdırıyoruz.
}

/*#include <stdio.h>
int	main()
{
	char src[] = "42İstanbul";
	char dest[] = "hasank";
	printf("%s", ft_strcpy(dest, src));
}*/
