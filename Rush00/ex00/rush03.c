/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:26:30 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/27 19:08:31 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	ft_putchar(char c);

void	ft_printline(int len, char first, char middle, char last)
{
	int	i;

	i = 1;
	while (i <= len)
	{
		if (i == 1)
			ft_putchar(first);
		else if (i == len)
			ft_putchar(last);
		else
			ft_putchar(middle);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line;

	line = 1;
	if (x > 0 && y > 0)
	{
		while (line <= y)
		{
			if (line == 1 || line == y)
				ft_printline(x, 'A', 'B', 'C');
			else
				ft_printline(x, 'B', ' ', 'B');
			line++;
		}
	}
	else
	{
		write(1, "Hatalı Değer Girdiniz.\n", 25);
	}
}
