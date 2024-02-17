/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:00:18 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/08 10:15:14 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;
	int	is_correct;

	if (!tab || !f)
		return (0);
	is_correct = 0;
	i = -1;
	while (tab[++i])
	{
		if (f(tab[i]) != 0)
			is_correct = 1;
	}
	return (is_correct);
}