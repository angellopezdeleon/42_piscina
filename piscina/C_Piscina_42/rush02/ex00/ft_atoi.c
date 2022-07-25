/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:42:08 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/27 22:23:57 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	dest;
	int	neg;

	i = 0;
	neg = 1;
	dest = 0;
	while ((str[i] == 32 || str[i] == '0') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		else if (str[i] == '+')
			neg *= 1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		dest = dest * 10;
		dest = dest + (str[i] - 48);
		i++;
	}
	return (dest * neg);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	printf("\nft_atoi: %d\n", ft_atoi(" ---+--+1234ab567"));
	printf("atoi:    %d\n\n", atoi(" ---+--+1234ab567"));
	return (0);
}
*/
