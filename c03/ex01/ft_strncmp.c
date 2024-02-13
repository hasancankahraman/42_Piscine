/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 11:26:18 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/27 11:34:14 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    i;

    if (n == 0)
        return (0);
    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
        i++;
    return (s1[i] - s2[i]);
}
/*int	main()
{
	printf("%d\n", ft_strncmp("HsanK", "HasanK", 5));
	printf("%d\n", ft_strncmp("HasanK", "hasan K", 5));
	printf("%d\n", ft_strncmp("hasanK", "hasanK", 5));
	
	printf("%d\n", strncmp("HsanK", "HasanK", 5));
	printf("%d\n", strncmp("HasanK", "hasan K", 5));
	printf("%d", strncmp("hasanK", "hasanK", 5));
}*/
