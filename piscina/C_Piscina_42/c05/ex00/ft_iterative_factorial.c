/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 00:23:19 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/30 13:42:47 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	dest;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	dest = nb;
	nb--;
	while (nb >= 1)
	{
		dest *= nb;
		nb--;
	}
	return (dest);
}

/*
int	main()
{
	int nb = -12;

	printf("\n %d \n", ft_iterative_factorial(nb));
	return (0);
}
*/
