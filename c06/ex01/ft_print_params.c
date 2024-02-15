/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:45:02 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/29 11:58:22 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	b = 1;
	while (b < argc)
	{
		a = 0;
		while (argv[b][a] != '\0')
		{
			ft_putchar(argv[b][a]);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
	return (0);
}