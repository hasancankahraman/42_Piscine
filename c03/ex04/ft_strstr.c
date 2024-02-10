/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:22:18 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/07 11:26:14 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int    i;
    int    j;

    i = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i])
    {
        j = 0;
        while (str[i + j] == to_find[j] && str[i])
        {
            if (to_find[j + 1] == '\0')
                return (&str[i]);
            j++;
        }
        i++;
    }
    return (0);
}

int	main()
{
	char str[] = "42İstanbul havuz öğrencisi Hasancan KAHRAMAN";
	char to_find[] = "Hasancan";
	printf("%s", ft_strstr(str, to_find));
}