/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:42:18 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/13 15:54:52 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	node = ft_create_elem(data);
	if (!node)
		return ;
	node->next = *begin_list;
	*begin_list = node;
}

/*
#include <stdio.h>

int main()
{
	char *str = "Hello";
	char *str1 = "World";
	t_list *node = ft_create_elem(str);
	t_list **begin = &node;

	ft_list_push_front(begin, str);
	printf("%s\n", (*begin)->data);

	ft_list_push_front(begin, str1);
	printf("%s\n", (*begin)->data);
}
*/