/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:44:15 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/18 14:25:20 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;
	int	c;
	int	d;

	c = *a;
	d = *b;
	div = c / d;
	mod = c % d;
	ft_swap(&div, a);
	ft_swap(&mod, b);
}

/*int	main(void)
{
	int a;
	int b;

	a = 0;
	b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);

	return(0);
}*/
