/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:24:40 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/26 10:33:44 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b) // Fonksiyonumuzda 2 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	int	tmp; // tmp adında integer tipinde bir değişken oluşturuyoruz.

	tmp = *a; // Fonksiyonda gönderilen a parametresinin değerini tmp değişkenine eşitliyoruz.
	*a = *b; // Fonksiyonda gönderilen b parametresinin değerini a değişkenine eşitliyoruz.
	*b = tmp; // İlk başta a parametresinden gelen değeri tmp'ye göndermiştik şimdi de tmp değerini b değişkenine eşitliyoruz.
	// Ve bu sayede fonksiyonda gönderilen a parametresindeki değer ile b parametresindeki değer yer değiştirmiş oluyor.
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	
	x = 5;
	y = 6;
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d \n", y);
}
*/