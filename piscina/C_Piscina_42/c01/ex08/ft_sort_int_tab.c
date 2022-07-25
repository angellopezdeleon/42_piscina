/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:28:23 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/23 13:05:55 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	while (size > 0)
	{
		i = 0;
		while (i != size - 1)
		{
			if (tab[i] > tab [i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}

/*
int main(void)
{
    int tab[6] = {5,33,4,102,4,2};
    int size = 6;
    ft_sort_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d, %d, \n", 
  tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
    return(0);
}
*/
