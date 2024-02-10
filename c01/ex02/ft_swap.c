/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:24:40 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/07 10:33:44 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a ;
	*a = *b;
	*b 
	= temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	
	x = 5;
	y = 6;
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d \n", y);
}
*/