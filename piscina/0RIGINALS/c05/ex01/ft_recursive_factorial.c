/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:44:47 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/30 20:41:58 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	dest;

	dest = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		dest *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main()
{
	int nb = 12;

	printf("\n %d \n", ft_recursive_factorial(nb));
	return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("%d ", ft_recursive_factorial(5));
	printf("%d ", ft_recursive_factorial(0));
	printf("%d ", ft_recursive_factorial(1));
	printf("%d ", ft_recursive_factorial(2));
	printf("%d ", ft_recursive_factorial(12));
	printf("%d ", ft_recursive_factorial(-1));
	printf("%d ", ft_recursive_factorial(-12));
}
*/
