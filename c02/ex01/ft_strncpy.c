/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:26:49 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/07 11:28:03 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
int	main()
{
	char src[] = "Hasan";
	char dest[] = "Kahraman01";

	printf("%s", ft_strncpy(dest, src, 2));
	printf("\n%s", ft_strncpy(dest, src, 4));
	printf("\n%s", ft_strncpy(dest, src, 6));
}*/
