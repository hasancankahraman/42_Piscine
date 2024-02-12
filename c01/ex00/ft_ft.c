/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:59:20 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/26 10:15:10 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr) // Fonksiyonumuzda 1 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	*nbr = 42; // Pointer nbr (yani nbr değişkeninin adresi) değerini 42 yapıyoruz.
}

/*#include <stdio.h>

int	main(void)
{
	int	*nbr;
	int	number;

	nbr = &number;
	ft_ft(nbr);
	printf("%d", number);
}
*/