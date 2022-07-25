/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:09:16 by anglopez          #+#    #+#             */
/*   Updated: 2022/06/01 19:41:28 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index -2) + ft_fibonacci(index - 1));
}

#include <stdio.h>
int	main(void)
{
	printf("-1,%d   ", ft_fibonacci(-10));
	printf("-1,%d   ", ft_fibonacci(-1));
	printf("0,%d   ", ft_fibonacci(0));
	printf("1,%d   ", ft_fibonacci(1));
	printf("1,%d   ", ft_fibonacci(2));
	printf("2,%d   ", ft_fibonacci(3));
	printf("3,%d   ", ft_fibonacci(4));
	printf("5,%d   ", ft_fibonacci(5));
	printf("8,%d   ", ft_fibonacci(6));
	printf("13,%d   ", ft_fibonacci(7));
	printf("21,%d   ", ft_fibonacci(8));
	printf("144,%d   ", ft_fibonacci(12));
	// printf("%d ", ft_fibonacci(46)); // 1836311903
}
