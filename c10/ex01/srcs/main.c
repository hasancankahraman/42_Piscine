/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:11:22 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/07 19:35:55 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.h"

int	main(int argc, char **argv)
{
	int		i;

	if (argc == 1)
		process_stdin();
	else
	{
		i = 0;
		while (++i < argc)
			display_file(argv[i], argv[0]);
	}
	return (0);
}