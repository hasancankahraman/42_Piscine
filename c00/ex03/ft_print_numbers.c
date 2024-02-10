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
	int	say;

	say = 48;
	while (say <= 57)
	{
		write(1, &say, 1);
		say++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/