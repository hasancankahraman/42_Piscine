/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:52:40 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/25 18:28:36 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	say;

	say = 97;
	while (say <= 122)
	{
		write (1, &say, 1);
		say++;
	}
}
/*
int main()
{
	ft_print_alphabet();
}
*/