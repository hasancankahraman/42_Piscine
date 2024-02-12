/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:00:53 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/26 11:09:19 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b) // Fonksiyonumuzda 2 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	int	div; // div adında integer tipinde bir değişken oluşturuyoruz.
	int	mod; // mod adında integer tipinde bir değişken oluşturuyoruz.

	div = *a / *b; // a parametresinin değerinin b parametresinin değerine bölümünden çıkan değeri div değişkenine atıyoruz.
	mod = *a % *b; // a parametresinin değerinin b parametresinin değerine modundan çıkan değeri mod değişkenine atıyoruz.
	*a = div; // div değişkenindeki değeri a değişkenine atıyoruz.
	*b = mod; // mod değişkenindeki değeri b değişkenine atıyoruz.
}

/*#include <stdio.h>

int main()
{
	int x;
	int	y;

	x = 20;
	y = 2;
	ft_ultimate_div_mod(&x, &y);
	printf("%d | %d", x, y);
}*/
