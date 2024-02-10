/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:58:25 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/07 11:58:26 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strlowcase(char *str)
{
    int    i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}

char    *ft_strcapitalize(char *str)
{
    int        i;
    int        i1;

    i = 0;
    i1 = 1;
    ft_strlowcase(str);
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (i1 == 1)
                str[i] -= 32;
                i1 = 0;
        }
        else if (str[i] >= '0' && str[i] <= '9')
            i1 = 0;
        else
            i1 = 1;
        i++;
    }
    return (str);
}

int    main()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(str));
}