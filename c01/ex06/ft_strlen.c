/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:27:06 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/26 11:38:43 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *string) // Fonksiyonumuzda 1 adet char tipinde bir string parametresi gönderilmesini istiyoruz. Char tipindeki bu parametre pointer'lı olduğu için string halini alabiliyor.
{
	int	n; // n adında integer tipinde bir değişken oluşturuyoruz.

	n = 0; // n'in değerini 0'a eşitliyoruz.
	while (string[n] != '\0') // Eğer string değişkeninin n değerindeki indeksini boşluğa eşit değilse bir döngüye giriyoruz.
	{
		n++; // n değişkeninin değerini 1 arttırıyoruz.
	}
	return (n); // n değerini döndürüyoruz ve bu sayede ekranda n değeri kaçsa o çıktıyı görüyoruz.
}

/*#include <stdio.h>
int	main()
{
	char *str = "42İstanbul";
	printf("%d", ft_strlen(str));
}*/
