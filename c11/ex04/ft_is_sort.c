/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:22:18 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/07 11:26:14 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		is_sorted;

	i = -1;
	is_sorted = true;
	if (length == 0 || length == 1)
		return (1);
	if (length < 0)
		return (0);
	while (++i < (length - 1) && is_sorted)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			is_sorted = false;
	}
	if (is_sorted == false)
	{
		i = -1;
		while (++i < (length - 1))
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
		}
	}
	return (1);
}