/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:01:22 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/07 11:33:44 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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
	if (!dest)
		return (NULL);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*struct_arr;
	int			i;

	struct_arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!struct_arr)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		struct_arr[i].size = ft_strlen(av[i]);
		struct_arr[i].str = av[i];
		struct_arr[i].copy = ft_strdup(av[i]);
	}
	struct_arr[i].size = 0;
	struct_arr[i].str = 0;
	struct_arr[i].copy = 0;
	return (struct_arr);
}

/*
#include <stdio.h>

int main(int argc, char **argv)
{
	t_stock_str *struct_arr = ft_strs_to_tab(argc, argv);

	int i = -1;
	while (struct_arr[++i].str)
	{
		printf("%s\n", struct_arr[i].str);
	}
}
*/