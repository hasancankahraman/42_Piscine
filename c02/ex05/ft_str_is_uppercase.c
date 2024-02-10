/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:58:25 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/07 11:58:26 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z' ))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
	printf("%d", ft_str_is_uppercase("ABCDEFGH"));
    printf("\n%d", ft_str_is_uppercase("ABCDEFGHaI"));
    printf("\n%d", ft_str_is_uppercase("-_134556ABCDEFGaH67"));
}*/
