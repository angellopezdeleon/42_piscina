/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:44:15 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/18 14:15:57 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 47;
	b = 4;

	ft_div_mod(a, b, &c, &d);
	printf("%d\n", c);
	printf("%d\n", d);

	return(0);
}*/
