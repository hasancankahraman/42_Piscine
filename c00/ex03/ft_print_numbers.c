/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:49:09 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/25 19:43:21 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	say; // say adında bir integer değişken tanımlandı

	say = 48; // 0 rakamının ascii karşılığı
	while (say <= 57) // 9 rakamının ascii karşılığı, say değişkeni bu sayıdan küçük veya eşit olduğu müddetçe bu döngüye girilecek
	{
		write(1, &say, 1); // say değişkenini ekrana yazdır
		say++; // 1 arttır
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/