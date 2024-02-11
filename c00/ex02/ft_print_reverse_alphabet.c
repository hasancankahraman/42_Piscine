/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:36:33 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/25 19:24:09 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	say; // say adında bir integer değişken tanımlandı.

	say	=	97; // z harfinin ascii karşılığı
	while (say <= 122) // a harfinin ascii karşılığı, say değişkeni bu sayıdan büyük veya eşit olduğu müddetçe bu döngüye girilecek
	{
		write (1, &say, 1); // say değişkenini ekrana yazdır
		say--; // 1 azalt
	}
}
/*
int main()
{
	ft_reverse_alphabet();
}
*/