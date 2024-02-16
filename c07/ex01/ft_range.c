/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:40:18 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/01 13:55:14 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		++i;
		++min;
	}
	return (arr);
}

/*#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int len = b - a;

	int *arr = ft_range(a, b);

	for (int i = 0; i < len; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}*/

