/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:16:35 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/26 10:22:37 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int ****nbr)
{
	****nbr = 42 ;
}
/*
#include <stdio.h>

int	main(void)
{
	int n;
	int *nbr3;
	int **nbr2;
	int ***nbr1;
	int ****nbr;

	n = 21;
	
	nbr3 = &n;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;

	ft_ultimate_ft(nbr);
	printf("%d",n);
	return (0);	
}
*/