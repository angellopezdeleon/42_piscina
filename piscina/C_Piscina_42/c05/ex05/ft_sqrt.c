/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 23:12:40 by anglopez          #+#    #+#             */
/*   Updated: 2022/06/01 23:48:23 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_sqrt(int nb)
{
	long	index;
	long	b;

	b = nb;
	if (b <= 0)
		return (0);
	if (b == 1)
		return (1);
	index = 2;
	if (b >= 2)
	{
		while (index * index <= b)
		{
			if (index * index == b)
				return (index);
			index++;
		}
	}
	return (0);
}

/*
int	main(void)
{
	printf("%d ", ft_sqrt(0));
	printf("%d ", ft_sqrt(1));
	printf("%d ", ft_sqrt(2));
	printf("%d ", ft_sqrt(3));
	printf("%d ", ft_sqrt(37));
	printf("%d ", ft_sqrt(55));

	printf("%d ", ft_sqrt(4));
	printf("%d ", ft_sqrt(9));
	printf("%d ", ft_sqrt(16));
	printf("%d ", ft_sqrt(25));
	printf("%d ", ft_sqrt(36));
	printf("%d ", ft_sqrt(49));
	printf("%d ", ft_sqrt(2086479684));
	printf("%d ", ft_sqrt(2147395600));
	printf("%d ", ft_sqrt(2147483647));
}
*/
