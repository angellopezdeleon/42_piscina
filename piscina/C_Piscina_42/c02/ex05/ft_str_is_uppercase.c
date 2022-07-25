/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:25:27 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/24 19:14:51 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

	printf("Result str:    %d\n", ft_str_is_uppercase(str));
	printf("Result abc:    %d\n", ft_str_is_uppercase(abc));
	printf("Result ABC:    %d\n", ft_str_is_uppercase(ABC));
	printf("Result num:    %d\n", ft_str_is_uppercase(num));
	printf("Result empty:  %d\n", ft_str_is_uppercase(empty));
	printf("Result norprint: %d\n", ft_str_is_uppercase(noprint));
	return (0);
}
*/
