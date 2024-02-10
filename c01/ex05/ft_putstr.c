/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:10:00 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/07 11:25:04 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		write(1, str++, 1);
		i++;
	}
}

/*#include <stdio.h>
int	main()
{
	char *str = "42İstanbul\n";
	ft_putstr(str);
}
*/
