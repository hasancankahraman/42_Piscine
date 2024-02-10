/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:55:42 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/07 11:56:41 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 48 && str [i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main()
{
	printf("%d", ft_str_is_numeric("05092000"));
	printf("\n%d", ft_str_is_numeric("0509akif2000"));
	printf("\n%d", ft_str_is_numeric(".(akif05dora_?"));
    printf("\n%d", ft_str_is_numeric(""));
}
*/
