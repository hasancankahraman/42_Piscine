/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:27:06 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/07 11:38:43 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *string)
{
	int	n;

	n = 0;
	while (string[n] != '\0')
	{
		n++;
	}
	return (n);
}

/*#include <stdio.h>
int	main()
{
	char *str = "42İstanbul";
	printf("%d", ft_strlen(str));
}*/
