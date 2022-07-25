/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 21:28:24 by anglopez          #+#    #+#             */
/*   Updated: 2022/06/01 19:10:56 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	dest;

	dest = nb;
	if (power == 0 && nb > 0)
		return (1);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power -1));
	if (power == 0 && nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("4-%d ", ft_recursive_power(2, 2));
	printf("2-%d ", ft_recursive_power(2, 1));
	printf("1-%d ", ft_recursive_power(2, 0));
	printf("1073741824 - %d ", ft_recursive_power(2, 30));
	printf("0-%d ", ft_recursive_power(2, -1));
	printf("0-%d ", ft_recursive_power(2, -2147483648));
	printf("1-%d ", ft_recursive_power(0, 0));
}
*/
