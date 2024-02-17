/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:58:57 by hkahrama          #+#    #+#             */
/*   Updated: 2024/02/07 19:03:44 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <errno.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <libgen.h>

void	display_file(char *filename, char *program_name);
void	process_stdin(void);

#endif /* CAT_H */