/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:20:04 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/08 10:37:24 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	count;
	int	i;

	if (!tab || !f)
		return (0);
	i = -1;
	count = 0;
	while (++i < length)
	{
		if (f(tab[i]) != 0)
			++count;
	}
	return (count);
}