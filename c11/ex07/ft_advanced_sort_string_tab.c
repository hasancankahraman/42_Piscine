/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:11:18 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/12 13:59:14 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int j, char **tab)
{
	char	*tmp;

	tmp = tab[j];
	tab[j] = tab[j + 1];
	tab[j + 1] = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
	}
	if (*s1 != *s2)
		return (*s1 - *s2);
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		len;
	char	*str1;
	char	*str2;

	i = -1;
	len = 0;
	if (!tab)
		return ;
	while (tab[len])
		++len;
	while (++i < len - 1)
	{
		j = -1;
		while (++j < len - i - 1)
		{
			str1 = tab[j];
			str2 = tab[j + 1];
			if (ft_strcmp(str1, str2) > 0)
				swap(j, tab);
		}
	}
}

/*
#include <unistd.h>

void	display_sorted_args(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = -1;
	while (++i < argc)
	{
		j = -1;
		str = argv[i];
		while (str[++j])
			write (1, &str[j], 1);
		write (1, "\n", 1);
	}
}

int main(int argc, char **argv)
{
	ft_sort_string_tab(argv);
	display_sorted_args(argc, argv);
}
*/