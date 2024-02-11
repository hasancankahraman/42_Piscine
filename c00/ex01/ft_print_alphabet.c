/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:52:40 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/25 18:28:35 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	say; // say diye bir char değişkeni tanımlandı

	say = 97; // a harfinin ascii karşılığı
	while (say <= 122) // z harfinin ascii karşılığı, say değişkeni bu sayıdan küçük veya eşit olduğu müddetçe bu döngüye girilecek
	{
		write (1, &say, 1); // say değişkenini ekrana yazdır
		say++;  // 1 arttır
	}
}
/*
int main()
{
	ft_print_alphabet();
}
*/