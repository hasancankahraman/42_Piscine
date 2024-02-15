/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:45:02 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/29 11:58:22 by hkahrama         ###   ########.fr       */
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

	j = 1; // j değerini 1'e eşitliyoruz.
	while (j < argc) // j değişkeninin değeri argc değişkeninin değerinden küçükse bu döngüye giriyoruz.
	{
		i = 0; // i değerini 0'a eşitliyoruz.
		while (argv[j][i] != '\0') // argv değişkeninin j değerindeki stringinin i değerindeki indeksi boşluğa eşit değilse bu döngüye giriyoruz.
		{
			ft_putchar(argv[j][i]); // argv değişkeninin j değerindeki stringinin i değerindeki indeksini yazdırıyoruz.
			i++; // i'nin değerini 1 arttırıyoruz.
		}
		ft_putchar('\n'); // Alt satıra geçiyoruz.
		j++; // j'nin değerini 1 arttırıyoruz.
	}
	return (0); // 0 döndürüp ekrana yazdırıyoruz.
}