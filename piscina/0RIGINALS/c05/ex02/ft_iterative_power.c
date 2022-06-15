/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:42:42 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/30 21:27:56 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	dest;

	power--;
	dest = nb;
	if (power == -1)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 0)
	{
		dest *= nb;
		power--;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("4: %d \n", ft_iterative_power(2, 2));
	printf("2: %d \n", ft_iterative_power(2, 1));
	printf("1: %d \n", ft_iterative_power(2, 0));
	printf("1073741824: %d \n", ft_iterative_power(2, 30));
	printf("0: %d \n", ft_iterative_power(2, -1));
	printf("0: %d \n", ft_iterative_power(2, -2147483648));
	printf("1: %d \n", ft_iterative_power(0, 0));
}
*/
