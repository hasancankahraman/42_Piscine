/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:38:48 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/07 10:59:06 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int a = 20;
	int b = 2;
	int *div;
	int *mod;
	
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("div:%d mod:%d", *div, *mod);
	return(0);
}
*/
