/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:13:18 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/01 13:34:14 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (0);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main()
{
	int str[] = "Hello World";
	printf("%s\n", ft_strdup(str));
}
*/