/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:12:34 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/24 18:15:54 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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

	printf("Result str:    %d\n", ft_str_is_lowercase(str));
	printf("Result abc:    %d\n", ft_str_is_lowercase(abc));
	printf("Result ABC:    %d\n", ft_str_is_lowercase(ABC));
	printf("Result num:    %d\n", ft_str_is_lowercase(num));
	printf("Result empty:  %d\n", ft_str_is_lowercase(empty));
	printf("Result norprint: %d\n", ft_str_is_lowercase(noprint));
	return (0);
}
*/
