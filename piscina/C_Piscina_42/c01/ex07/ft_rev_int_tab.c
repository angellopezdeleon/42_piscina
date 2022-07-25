/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:17:38 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/22 19:40:03 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	tmp;
	int	tmp2;

	i = 0;
	c = size;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tmp2 = tab[c - 1];
		tab[i] = tmp2;
		tab[c - 1] = tmp;
		i++;
		c--;
	}
}

/*
int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5};
	int	size = 6;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d \n", 
  tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return(0);
}
*/
