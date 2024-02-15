/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:01:02 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/29 12:17:23 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) // Fonksiyonumuzda 1 adet char tipinde parametre gönderilmesini istiyoruz.
{
	write(1, &c, 1); // Fonksiyonun istediği char parametresini yazdırıyoruz.
}

int	main(int argc, char *argv[]) // Programımızda 1 adet integer ve 1 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer tipinde bir değişken tanımlıyoruz.
	int	j; // j adında integer tipinde bir değişken tanımlıyoruz.

	i = argc - 1; // argc değişkeninin değerinin 1 eksiğini i değerine eşitliyoruz.
	while (i > 0) // i değişkeninin değeri 0'dan büyükse bu döngüye giriyoruz.
	{
		j = 0; // j değişkeninin değerini 0'a eşitliyoruz.
		while (argv[i][j] != '\0' && argc) // argv değişkeninin i değerindeki stringinin j değerindeki indeksi boşluğa eşit değilse ve argc değişkeninin değeri varsa bu döngüye giriyoruz.
		{
			ft_putchar(argv[i][j]); // argv değişkeninin i değerindeki stringinin j değerindeki indeksini yazdırıyoruz.
			j++; // j'nin değerini 1 arttırıyoruz.
		}
		ft_putchar('\n'); // Alt satıra geçiyoruz.
		i--; // i'nin değerini 1 azaltıyoruz.
	}
	return (0); // 0 döndürüp ekrana yazdırıyoruz.
}