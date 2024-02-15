/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:01:02 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/29 12:17:23 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	a = argc - 1;
	while (a > 0)
	{
		b = 0;
		while (argv[a][b] != '\0' && argc)
		{
			ft_putchar(argv[a][b]);
			b++;
		}
		ft_putchar('\n');
		a--;
	}
	return (0);
}