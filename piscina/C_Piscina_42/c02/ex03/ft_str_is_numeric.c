/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:02:46 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/24 18:13:07 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main()
{
	char str[] = "+,;::-$345ADFadf&/\t (";
	char abc[] = "az";
	char ABC[] = "AZ";
	char num[] = "09";
	char empty[] = "";
	char noprint[] = "\t";

	printf("Result str:    %d\n", ft_str_is_numeric(str));
	printf("Result abc:    %d\n", ft_str_is_numeric(abc));
	printf("Result ABC:    %d\n", ft_str_is_numeric(ABC));
	printf("Result num:    %d\n", ft_str_is_numeric(num));
	printf("Result empty:  %d\n", ft_str_is_numeric(empty));
	printf("Result norprint: %d\n", ft_str_is_numeric(noprint));
	return (0);
}
*/
