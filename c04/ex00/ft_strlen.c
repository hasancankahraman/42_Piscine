/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:40:18 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/27 13:50:14 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str) // Fonksiyonumuzda 1 adet char tipinde bir string parametresi gönderilmesini istiyoruz. Char tipindeki bu parametre pointer'lı olduğu için string halini alabiliyor.
{
	int	i; // n adında integer tipinde bir değişken oluşturuyoruz.

	i = 0; // n'in değerini 0'a eşitliyoruz.
	while (str[i] != '\0') // Eğer string değişkeninin n değerindeki indeksini boşluğa eşit değilse bir döngüye giriyoruz.
	{
		i++; // n değişkeninin değerini 1 arttırıyoruz.
	}
	return (i); // n değerini döndürüyoruz ve bu sayede ekranda n değeri kaçsa o çıktıyı görüyoruz.
}
/*int main (void)
{
	printf("%i", ft_strlen("854dsjfksdlk"));
}*/
