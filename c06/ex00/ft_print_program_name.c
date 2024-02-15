/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:02:18 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/29 11:13:14 by hkahrama         ###   ########.fr       */
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

	i = 0; // i değerini 0'a eşitliyoruz.
	while (argv[0][i] != '\0' && argc) // Gönderilen argv dizisinin ilk stringinde i değerindeki indeksi boşluğa eşit değilse ve argc varsa bu döngüye giriyoruz.
	{
		ft_putchar(argv[0][i]); // ft_putchar fonksiyonunu kullanarak argv dizisinin ilk stringinde i değerindeki indeksini yazdırıyoruz.
		++i; // i değerini 1 arttırıp devam ediyoruz.
	}
	ft_putchar('\n'); // Alt satıra geçiyoruz.
	return (0); // 0 döndürüp ekrana yazdırıyoruz.
}