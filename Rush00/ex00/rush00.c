/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahrama <hkahrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:07:09 by hkahrama          #+#    #+#             */
/*   Updated: 2024/01/28 12:07:10 by hkahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void ft_putchar(char c);
 
void ft_printline(int length, int first, int middle, int last)
{
    int i;
    i= 1;

    while(i <= length)
    {
        if(i == 1)
            ft_putchar(first);

        else if(i == length)
            ft_putchar(last);

        else
            ft_putchar(middle);
        i++;
    }
    
    ft_putchar('\n');
}

void rush(int x, int y)
{
    int i;
    i = 1;
    if(x> 0 && y> 0)
    {
        while( i <= y)
        {
            if(i == 1 || i == y)
                ft_printline(x, 'o', '-', 'o');
            else
                ft_printline(x, '|', ' ', '|');
            i++;
        }
    }

}

